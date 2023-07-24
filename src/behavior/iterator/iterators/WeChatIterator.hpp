#ifndef WECHAT_ITERATOR_HPP
#define WECHAT_ITERATOR_HPP

#include <string>
#include <vector>
#include <memory>
#include "IProfileIterator.hpp"
#include "../collections/WeChat.hpp"

class WeChatIterator : public IProfileIterator{
public:
    WeChatIterator(WeChat* wechat, std::string profileId, std::string type);
    virtual ~WeChatIterator() = default;
    std::shared_ptr<Profile> begin() override;
    std::shared_ptr<Profile> end() override;
    std::shared_ptr<Profile> next() override;

private:
    void lazyInit();
    std::shared_ptr<WeChat> weChat_;
    std::string profileId_;
    std::string type_;
    int currentPosition_ = 0;
    std::vector<std::shared_ptr<Profile>> cache_;
};

#endif