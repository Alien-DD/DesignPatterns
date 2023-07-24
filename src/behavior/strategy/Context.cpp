#include <iostream>
#include <string>
#include "Context.hpp"

Context::Context(std::shared_ptr<IStrategy> strategy)
{
    std::cout << __func__ << std::endl;
    strategy_ = strategy;
}

void Context::setStrategy(std::shared_ptr<IStrategy> strategy)
{
    std::cout << __func__ << std::endl;
    strategy_ = strategy;
}

int Context::executeStrategy(int num1, int num2)
{
    std::cout << __func__ << std::endl;
    return strategy_->execute(num1, num2);
}