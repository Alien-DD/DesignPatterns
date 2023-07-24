#include <iostream>
#include <string>
#include "ConcreteStrategyA.hpp"

int ConcreteStrategyA::execute(int num1, int num2)
{
    std::cout << "ConcreteStrategyA::" << name_ << std::endl;
    return num1 + num2;
}