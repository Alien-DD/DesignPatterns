#ifndef IMEDIATOR_HPP
#define IMEDIATOR_HPP

#include <string>
#include "../component/Component.hpp"

class Component;
class IMediator{
public:
    virtual void notif(Component* sender, std::string event) = 0;
};

#endif