#include <iostream>
#include <string>
#include <memory>
#include <gtest/gtest.h>

#include "Context.hpp"
#include "Draft.hpp"
#include "Moderation.hpp"
#include "Publish.hpp"

TEST(StateTest, normalFunctionTest)
{
    auto context = std::make_shared<Context>();
    auto draft = std::make_shared<Draft>(context);
    
    context->changeState(draft);
    context->operation1();
    context->operation2();
    context->operation2();

    EXPECT_EQ(context->getStr(), "Published");
}