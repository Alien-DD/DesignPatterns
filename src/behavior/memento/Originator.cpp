#include <iostream>
#include <string>
#include "Originator.hpp"

Originator::Originator(bool state) : state_(state)
{

}

bool Originator::getState()
{
    return state_;
}

void Originator::setState(bool state)
{
    state_ = state;
}

std::shared_ptr<Memento> Originator::save()
{
    return std::make_shared<Memento>(state_);
}

void Originator::restore(std::shared_ptr<Memento> memo)
{
    std::cout << __func__ << " with " << memo->getState() << std::endl;
    state_ = memo->getState();
}