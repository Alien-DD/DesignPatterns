#include <string>
#include <iostream>
#include "Moderation.hpp"
#include "Draft.hpp"

Draft::Draft(std::shared_ptr<Context> context):IState(context)
{
    std::cout << __func__ << " construct" <<std::endl;
}

Draft::~Draft()
{
    std::cout << __func__ <<std::endl;
}

void Draft::operation1()
{
    std::cout << "Draft "<< __func__ << std::endl;
    context_->changeState(std::make_shared<Moderation>(context_));
}

void Draft::operation2()
{
    std::cout << "Draft "<< __func__ << std::endl;
}