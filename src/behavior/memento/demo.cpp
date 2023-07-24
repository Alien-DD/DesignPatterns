#include <iostream>
#include <string>
#include <memory>
#include <gtest/gtest.h>

#include "Originator.hpp"
#include "Caretaker.hpp"
#include "Memento.hpp"

TEST(MementoTest, normalFunctionTest)
{
    auto original = std::make_shared<Originator>(false);
    auto original2 = std::make_shared<Originator>(false);
    auto caretaker = std::make_shared<Caretaker>(original);
    auto caretaker2 = std::make_shared<Caretaker>(original2);
    caretaker->backup();

    original->setState(true);
    caretaker->backup();

    original->setState(false);
    caretaker->undo();

    EXPECT_TRUE(original->getState());
}