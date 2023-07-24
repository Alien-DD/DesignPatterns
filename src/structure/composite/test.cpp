#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <gtest/gtest.h>
#include <algorithm>
#include "IComposite.hpp"
#include "EarPhone.hpp"
#include "Box.hpp"
#include "Phone.hpp"
#include "Mouse.hpp"

TEST(CompositeTest, normalFunctionTest)
{
    auto box = std::make_shared<Box>();
    auto earPhone = std::make_shared<EarPhone>(500);
    auto phone = std::make_shared<Phone>(8000);
    box->add(earPhone);
    box->add(phone);

    auto mouse = std::make_shared<Mouse>(1000);

    auto total = std::make_shared<Box>();
    total->add(box);
    total->add(mouse);

    EXPECT_TRUE(total->execute() == 9500);
}
