#include <iostream>
#include <algorithm>
#include "RegisterListener.hpp"

RegisterListener::RegisterListener(IMediator* dialog, std::vector<std::string> userLists)
    : ICheckBoxListener(dialog), userLists_(userLists)
{
    std::cout << __func__ << " construct~" <<std::endl;
    registrationUsername_ = new Textbox(dialog_);
    registrationEmail_ = new Textbox(dialog_);
    registrationPassword_ = new Textbox(dialog_);
}

void RegisterListener::checkboxStateChanged(std::string event, bool checked)
{
    if (checked)
    {
        std::cout << "Has checked, enter login process." << std::endl;
        return;
    }
    std::cout << " Enter "<< __func__ << " RegisterBox~" << std::endl;
    if (event == "check")
    {
        registrationUsername_->setText("abcd");
        registrationEmail_->setText("123456@qq.com");
        registrationPassword_->setText("abcd123456");
        std::cout << "Input username: " << registrationUsername_->getText()
            << ", email: " << registrationEmail_->getText()
            << ", password: " << registrationPassword_->getText() << std::endl;
    }
    else if (event == "click")
    {
        if (std::find(userLists_.begin(), userLists_.end(), registrationUsername_->getText())
            != userLists_.end())
        {
            std::cout << registrationUsername_->getText() << " has registered, please login." << std::endl;
            return;
        }
        userLists_.push_back(registrationUsername_->getText());
        std::cout << registrationUsername_->getText() << " register success." << std::endl;
    }
    else if (event == "keypress")
    {
        registrationUsername_->clear();
        registrationEmail_->clear();
        registrationPassword_->clear();
        std::cout << "clear register username, email and password textbox" << std::endl;
    }
    else
    {
        std::cout << event << " not support!" << std::endl;
    }
}