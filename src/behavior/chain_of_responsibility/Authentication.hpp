#ifndef AUTHENTICATION_HPP
#define AUTHENTICATION_HPP

#include <memory>
#include <string>
#include <vector>
#include "BaseHandler.hpp"

class Authentication : public BaseHandler{
public:
    Authentication(std::vector<std::string> userlist);
    std::vector<std::string> getUserList();
    void addUser(std::string user);
    bool handle(std::shared_ptr<Request> request, std::shared_ptr<Product> product) override;

private:
    std::vector<std::string> userlist_;
};

#endif