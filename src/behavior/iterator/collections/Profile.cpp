#include <iostream>
#include <string>
#include "Profile.hpp"

Profile::Profile(std::string id, std::string email)
    : id_(id), email_(email)
{

}

std::string Profile::getId()
{
    return id_;
}

std::string Profile::getEmail()
{
    return email_;
}