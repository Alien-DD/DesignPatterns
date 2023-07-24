#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <string>
#include "Component.hpp"

class Button : public Component{
public:
    Button(IMediator* dialog);
    virtual ~Button() = default;
    void click();
    void keypress();
};

#endif