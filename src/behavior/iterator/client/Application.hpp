#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <string>
#include "../collections/ISocialNetwork.hpp"
#include "../collections/Profile.hpp"
#include "SocialSpammer.hpp"

enum WORKMODE{
    wechat = 0,
    linkin
};

class Application{
public:
    void config(WORKMODE workmode);
    void sendSpamToFriends(Profile* profile);
    void sendSpamToCoworkers(Profile* profile);
private:
    ISocialNetwork* network_;
    SocialSpammer* spammer_;
};

#endif