#include <iostream>
#include "Application.hpp"

int main()
{
    auto app = new Application();
    app->config(WORKMODE::wechat);

    auto profile = new Profile("123", "abc123@qq.com");
    app->sendSpamToFriends(profile);
}