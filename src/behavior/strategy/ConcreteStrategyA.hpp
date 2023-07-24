#ifndef CONCRETE_STRATEGY_A_HPP
#define CONCRETE_STRATEGY_A_HPP

#include "IStrategy.hpp"

class ConcreteStrategyA : public IStrategy{
public:
    ConcreteStrategyA(std::string name):IStrategy(name){}
    int execute(int num1, int num2) override;
};

#endif