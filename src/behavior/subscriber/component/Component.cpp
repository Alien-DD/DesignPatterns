#include <iostream>
#include "Component.hpp"

Component::Component(IMediator* dialog):dialog_(dialog)
{
    std::cout << __func__ << std::endl;
}

