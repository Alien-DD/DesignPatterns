#ifndef CAPACITY_HPP
#define CAPACITY_HPP

#include <memory>
#include <string>
#include <vector>
#include "BaseHandler.hpp"

class Capacity : public BaseHandler{
public:
    Capacity(uint32_t capacity);
    uint32_t getCapacity();
    void setCapacity(uint32_t capacity);
    bool handle(std::shared_ptr<Request> request, std::shared_ptr<Product> product) override;

private:
    std::uint32_t capacity_;
};

#endif