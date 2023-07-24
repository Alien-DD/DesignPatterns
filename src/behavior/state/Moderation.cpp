#include <string>
#include <iostream>
#include "Moderation.hpp"
#include "Draft.hpp"
#include "Publish.hpp"

Moderation::Moderation(std::shared_ptr<Context> context):IState(context)
{
    std::cout << __func__ << " construct" <<std::endl;
}

Moderation::~Moderation()
{
    std::cout << __func__ <<std::endl;
}

void Moderation::operation1()
{
    std::cout << "Moderation "<< __func__ << std::endl;
}

void Moderation::operation2()
{
    std::cout << "Moderation "<< __func__ << std::endl;
    context_->setStr("Moderation");
    context_->changeState(std::make_shared<Publish>(context_));
}