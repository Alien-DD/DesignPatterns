#include <string>
#include <iostream>
#include "Draft.hpp"
#include "Publish.hpp"

Publish::Publish(std::shared_ptr<Context> context):IState(context)
{
    std::cout << __func__ << " construct" <<std::endl;
}

Publish::~Publish()
{
    std::cout << __func__ <<std::endl;
}

void Publish::operation1()
{
    std::cout << "Publish "<< __func__ << std::endl;
    //context_->changeState(new Draft());
}

void Publish::operation2()
{
    context_->setStr("Published");
    std::cout << "Publish finished "<< __func__ << std::endl;
}