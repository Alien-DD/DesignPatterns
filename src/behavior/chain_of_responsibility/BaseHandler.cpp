#include <iostream>
#include "BaseHandler.hpp"

bool BaseHandler::handle(std::shared_ptr<Request> request, std::shared_ptr<Product> product)
{
    std::cout << "BaseHandler::handle no process" << std::endl;
    return true;
}

bool BaseHandler::transferToNext(std::shared_ptr<Request> request, std::shared_ptr<Product> product)
{
    if (next_)
    {
        std::cout << "transfer to next handle~" << std::endl;
        return next_->handle(request, product);
    }
    std::cout << "the process finished~" << std::endl;
    return true;
}