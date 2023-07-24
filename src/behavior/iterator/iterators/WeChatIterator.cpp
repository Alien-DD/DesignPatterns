#include <iostream>
#include "WeChatIterator.hpp"

WeChatIterator::WeChatIterator(WeChat* wechat, std::string profileId, std::string type)
    : weChat_(wechat), profileId_(profileId), type_(type)
{

}


void WeChatIterator::lazyInit()
{
    std::cout << __func__ << std::endl;
    if (cache_ == NULL)
    {
        cache_ = weChat_->socialGraphRequest(profileId_, type_);
    }
}

std::shared_ptr<Profile> WeChatIterator::begin()
{
    std::cout << __func__ << std::endl;
    lazyInit();
    return cache_[currentPosition_];
}

std::shared_ptr<Profile> WeChatIterator::end()
{
    std::cout << __func__ << std::endl;
    return cache_[cache_.size()-1];
}

std::shared_ptr<Profile> WeChatIterator::next()
{
    if (currentPosition_ != (cache_.size() -1))
    {
        return cache_[currentPosition_++];
    }
    else
        return nullptr;
}