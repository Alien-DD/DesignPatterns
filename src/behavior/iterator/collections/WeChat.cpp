#include <iostream>
#include "WeChat.hpp"
#include "../iterators/WeChatIterator.hpp"

WeChat::WeChat()
{
    
}

std::vector<std::shared_ptr<Profile>> WeChat::socialGraphRequest(std::string profileId, std::string type)
{
    std::cout << __func__ << std::endl;
    if (type == "friends")
    {
        return friendsList_;
    }
    else if (type == "coworkers")
    {
        return coworkersList_;
    }
}

IProfileIterator* WeChat::createFriendsIterator(std::string profileId)
{
    return new WeChatIterator(this, profileId, "friends");
}

IProfileIterator* WeChat::createCoworkersIterator(std::string profileId)
{
    return new WeChatIterator(this, profileId, "coworkers");
}