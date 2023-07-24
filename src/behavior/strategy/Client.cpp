#include <iostream>
#include <string>
#include <memory>
#include <gtest/gtest.h>
#include "IStrategy.hpp"
#include "Context.hpp"
#include "ConcreteStrategyA.hpp"
#include "ConcreteStrategyB.hpp"

enum Enum_Operation{
    Enum_Add = 0,
    Enum_Sub,
    Enum_Mul,
    Enum_Div
};

std::shared_ptr<IStrategy> createStrategy(Enum_Operation operation)
{
    std::shared_ptr<IStrategy> strategy;
    switch (operation)
    {
        case Enum_Operation::Enum_Add:
            strategy = std::make_shared<ConcreteStrategyA>("Add");
            break;
        case Enum_Operation::Enum_Sub:
            strategy = std::make_shared<ConcreteStrategyB>("Sub");
            break;
        default:
            std::cout << "No invalid Operation!" << std::endl;
    }
    return strategy;
}

TEST(StrategyTest, normalFunctionTest)
{
    Enum_Operation operation = Enum_Operation::Enum_Add;
    auto strategy = createStrategy(operation);
    
    auto context = std::make_shared<Context>(strategy);
    int num1 = 30, num2 = 20;
    EXPECT_EQ(context->executeStrategy(num1, num2), 50);

    operation = Enum_Operation::Enum_Sub;
    strategy = createStrategy(operation);
    context->setStrategy(strategy);
    EXPECT_EQ(context->executeStrategy(num1, num2), 10);
}
