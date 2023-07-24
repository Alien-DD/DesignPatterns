#ifndef PROFILE_HPP
#define PROFILE_HPP

#include <string>

class Profile{
public:
    Profile(std::string id, std::string email);
    virtual ~Profile() = default;
    std::string getId();
    std::string getEmail();

private:
    std::string id_;
    std::string email_;
};

#endif