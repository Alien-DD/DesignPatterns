#ifndef IHANDLER_HPP
#define IHANDLER_HPP

#include <memory>
#include "Request.hpp"
#include "Product.hpp"

class IHandler{
public:
    void setNext(std::shared_ptr<IHandler> handler)
    {
        next_ = handler;
    }
    virtual bool handle(std::shared_ptr<Request> request, std::shared_ptr<Product> product) = 0;

protected:
    std::shared_ptr<IHandler> next_;
};

#endif