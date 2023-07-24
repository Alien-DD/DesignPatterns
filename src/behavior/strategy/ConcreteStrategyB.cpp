#include <iostream>
#include <string>
#include "ConcreteStrategyB.hpp"

int ConcreteStrategyB::execute(int num1, int num2)
{
    std::cout << "ConcreteStrategyB::" << name_ << std::endl;
    return num1 - num2;
}