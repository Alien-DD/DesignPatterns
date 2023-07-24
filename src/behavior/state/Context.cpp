#include <string>
#include <iostream>
#include "Context.hpp"
#include "Draft.hpp"

Context::Context()
{
    std::cout << __func__ << " construct with initState~" << std::endl;
    str_ = "Draft";
}

Context::~Context()
{
    std::cout << __func__ << std::endl;
}

void Context::changeState(std::shared_ptr<IState> state)
{
    std::cout << __func__ << std::endl;
    state_ = state;
}

void Context::operation1()
{
    std::cout << "Context::operation1()" << std::endl;
    state_->operation1();
}

void Context::operation2()
{
    std::cout << "Context::operation2()" << std::endl;
    state_->operation2();
}

void Context::setStr(std::string str)
{
    str_ = str;
}

std::string Context::getStr()
{
    return str_;
}