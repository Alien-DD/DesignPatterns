#include <algorithm>
#include <iostream>
#include "Authentication.hpp"

Authentication::Authentication(std::vector<std::string> userlist)
    : userlist_(userlist)
{
    std::cout << "Authentication construct~" << std::endl;
}

std::vector<std::string> Authentication::getUserList()
{
    return userlist_;
}

void Authentication::addUser(std::string user)
{
    userlist_.push_back(user);
}

bool Authentication::handle(std::shared_ptr<Request> request, std::shared_ptr<Product> product)
{
    if (std::find(userlist_.begin(), userlist_.end(), request->userName_) != userlist_.end())
    {
        std::cout << "request user is valid~" << std::endl;
        return transferToNext(request, product);
    }
    else
    {
        std::cout << "request user is unavalible~" << std::endl;
        return false;
    }
}