#ifndef WECHAT_HPP
#define WECHAT_HPP

#include <string>
#include <vector>
#include "Profile.hpp"

class WeChat{
public:
    WeChat();
    virtual ~WeChat() = default;
    std::vector<std::shared_ptr<Profile>> socialGraphRequest(std::string profileId, std::string type);
    IProfileIterator* createFriendsIterator(std::string profileId) override;
    IProfileIterator* createCoworkersIterator(std::string profileId) override;
private:
    std::vector<std::shared_ptr<Profile>> friendsList_;
    std::vector<std::shared_ptr<Profile>> coworkersList_;
};

#endif