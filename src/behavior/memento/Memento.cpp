#include <iostream>
#include <string>
#include "Memento.hpp"

Memento::Memento(bool state) : state_(state)
{
    std::cout << "memento construct with state: " << state_ << std::endl;
}

bool Memento::getState()
{
    std::cout << "Memento " << __func__ << ": "<< state_ << std::endl;
    return state_;
}