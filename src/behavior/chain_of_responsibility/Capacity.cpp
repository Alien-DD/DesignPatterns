#include <iostream>
#include "Capacity.hpp"

Capacity::Capacity(uint32_t capacity) : capacity_(capacity)
{
    std::cout << "Capacity construct with " << capacity_ << std::endl;
}

uint32_t Capacity::getCapacity()
{
    return capacity_;
}

void Capacity::setCapacity(uint32_t capacity)
{
    capacity_ = capacity;
    std::cout << __func__ << ": " << capacity_ << std::endl;
}

bool Capacity::handle(std::shared_ptr<Request> request, std::shared_ptr<Product> product)
{
    if (product->getVolume()*request->numbers_ <= capacity_)
    {
        std::cout << "Capacity is valid~" << std::endl;
        return transferToNext(request, product);
    }
    else
    {
        std::cout << "Capacity request numbers is unavalible~" << std::endl;
        return false;
    }
}