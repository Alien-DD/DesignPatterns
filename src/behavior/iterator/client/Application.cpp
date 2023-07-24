#include <iostream>
#include "Application.hpp"
#include "../collections/WeChat.hpp"

void Application::config(WORKMODE workmode)
{
    if (workmode == WORKMODE::wechat)
    {
        network_ = new WeChat();
    }
    else
    {
        std::cout << "Don't support now~" << std::endl;
    }
    spammer_ = new SocialSpammer();
}
    
void Application::sendSpamToFriends(Profile* profile)
{
    auto iterator = network_->createFriendsIterator(profile->getId());
    spammer_->send(iterator, "important message!");
}


void Application::sendSpamToCoworkers(Profile* profile)
{
    auto iterator = network_->createCoworkersIterator(profile->getId());
    spammer_->send(iterator, "important message!");    
}
