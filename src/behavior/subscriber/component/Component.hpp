#ifndef COMPONENT_HPP
#define COMPONENT_HPP

#include <string>
#include "../dialog/IMediator.hpp"

class IMediator;
class Component{
public:
    Component(IMediator* dialog);
    virtual ~Component() = default;

protected:
    IMediator* dialog_;
};

#endif