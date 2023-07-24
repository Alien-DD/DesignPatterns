#include <iostream>
#include "Button.hpp"

Button::Button(IMediator* dialog):Component(dialog)
{
    std::cout << __func__ << std::endl;
}

void Button::click()
{
    std::cout << __func__ << std::endl;
    dialog_->notif(this, "click");
}

void Button::keypress()
{
    std::cout << __func__ << std::endl;
    dialog_->notif(this, "keypress");
}