#include <iostream>
#include "Checkbox.hpp"

Checkbox::Checkbox(IMediator* dialog, bool checked):Component(dialog), checked(checked)
{
    std::cout << __func__ << " with " << checked << std::endl;
}

void Checkbox::check()
{
    std::cout << __func__ << std::endl;
    dialog_->notif(this, "check");
}