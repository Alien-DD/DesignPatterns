#ifndef CONCRETE_STRATEGY_B_HPP
#define CONCRETE_STRATEGY_B_HPP

#include "IStrategy.hpp"

class ConcreteStrategyB : public IStrategy{
public:
    ConcreteStrategyB(std::string name):IStrategy(name){}
    int execute(int num1, int num2) override;
};

#endif