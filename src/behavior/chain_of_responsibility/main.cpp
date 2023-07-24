#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <gtest/gtest.h>
#include <algorithm>
#include "Authentication.hpp"
#include "Budget.hpp"
#include "Capacity.hpp"
#include "Request.hpp"
#include "Product.hpp"

TEST(ChainOfResponsibility, normalFunctionTest)
{
    std::vector<std::string> userLists = {"1234", "abc", "admin"};

    auto product = std::make_shared<Product>("product", 1000, 200);
    auto req = std::make_shared<Request>("admin", 500);
    
    auto authen = std::make_shared<Authentication>(userLists);
    auto manager = std::make_shared<Manager>(2000);
    auto president = std::make_shared<President>(10000);
    auto cap = std::make_shared<Capacity>(1000000);
    authen->setNext(manager);
    manager->setNext(president);
    president->setNext(cap);

    EXPECT_TRUE(authen->handle(req, product));
    std::cout << std::endl;
    std::cout << std::endl;

    req->numbers_ = 2000;
    EXPECT_FALSE(budget->handle(req, product));
    std::cout << std::endl;
    std::cout << std::endl;

    req->numbers_ = 2000;
    EXPECT_FALSE(authen->handle(req, product));
    std::cout << std::endl;
    std::cout << std::endl;

    req->userName_ = "aaa";
    req->numbers_ = 500;
    EXPECT_FALSE(authen->handle(req, product));
    std::cout << std::endl;
    std::cout << std::endl;
}

bool processResult(
    std::vector<std::string> userLists,
    std::shared_ptr<Request> request,
    std::shared_ptr<Product> product)
{
    std::uint32_t budget_ = 1000000;
    std::uint32_t capacity_ = 1000000;
    if (std::find(userLists.begin(), userLists.end(), request->userName_) != userLists.end())
    {
        std::cout << "request user is valid~" << std::endl;
        if (product->getPrice()*request->numbers_ <= budget_)
        {
            std::cout << "Budget is valid~" << std::endl;
            if (product->getVolume()*request->numbers_ <= capacity_)
            {
                std::cout << "Capacity is valid~" << std::endl;
                std::cout << "Capacity process finished." << std::endl;
                return true;
            }
            else
            {
                std::cout << "Capacity is unavalible~" << std::endl;
                return false;
            }
        }
        else
        {
            std::cout << "Budget is unavalible~" << std::endl;
            return false;
        }
    }
    else
    {
        std::cout << "request user is unavalible~" << std::endl;
        return false;
    }
}

TEST(ChainOfResponsibility, badExample)
{
    std::vector<std::string> userLists = {"1234", "abc", "admin"};

    auto product = std::make_shared<Product>("product", 1000, 200);
    auto req = std::make_shared<Request>("admin", 500);
    
    EXPECT_TRUE(processResult(userLists, req, product));
}
