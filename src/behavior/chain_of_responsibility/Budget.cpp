#include <iostream>
#include "Budget.hpp"

Budget::Budget(uint32_t budget) : budget_(budget)
{
    std::cout << "Budget construct with " << budget_ << std::endl;
}

uint32_t Budget::getBudget()
{
    return budget_;
}

void Budget::setBudget(uint32_t budget)
{
    budget_ = budget;
    std::cout << __func__ << ": " << budget_ << std::endl;
}

bool Budget::handle(std::shared_ptr<Request> request, std::shared_ptr<Product> product)
{
    if (product->getPrice()*request->numbers_ <= budget_)
    {
        std::cout << "Budget is valid ~" << std::endl;
        return transferToNext(request, product);
    }
    else
    {
        std::cout << "Budget is unavalible~" << std::endl;
        return false;
    }
}