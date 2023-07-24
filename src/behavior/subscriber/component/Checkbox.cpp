#include <iostream>
#include "Checkbox.hpp"

Checkbox::Checkbox(IMediator* dialog, bool checked) : Component(dialog), checked(checked)
{
    std::cout << __func__ << " with " << checked << std::endl;
}

void Checkbox::check()
{
    std::cout << __func__ << std::endl;
    dialog_->notif(this, "check");
}

void Checkbox::addListener(ICheckBoxListener* comp)
{
    std::cout << __func__ << std::endl;
    listeners.push_back(comp);
}

void Checkbox::removeListener(ICheckBoxListener* comp)
{
    std::cout << __func__ << std::endl;
    for (auto iter = listeners.begin(); iter != listeners.end(); iter++)
    {
        if (*iter == comp)
        {
            iter = listeners.erase(iter);
        }
    }
}

void Checkbox::checkBoxNotif(std::string event)
{
    std::cout << __func__ << std::endl;
    for (auto listener : listeners)
    {
        listener->checkboxStateChanged(event, checked);
    }
}