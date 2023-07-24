#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <memory>
#include <string>
#include <iostream>

class Product{
public:
    Product(std::string name, uint32_t price, uint32_t volume)
        : productName_(name), price_(price), volume_(volume)
    {
        std::cout << "Product construct with name: " << productName_
            << ", price: " << price_ << ", volume: " << volume_ << std::endl;
    }

    uint32_t getPrice()
    {
        return price_;
    }

    uint32_t getVolume()
    {
        return volume_;
    }
    
    std::string productName_;
    uint32_t price_;
    uint32_t volume_;
};

#endif