#ifndef BASE_HANDLER_HPP
#define BASE_HANDLER_HPP

#include <memory>
#include <string>
#include <vector>
#include "IHandler.hpp"

class BaseHandler : public IHandler{
public:
    BaseHandler() {}
    bool handle(std::shared_ptr<Request> request, std::shared_ptr<Product> product) override;
    bool transferToNext(std::shared_ptr<Request> request, std::shared_ptr<Product> product);
};

#endif