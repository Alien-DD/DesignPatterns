#include <iostream>
#include <algorithm>
#include "LoginListener.hpp"

LoginListener::LoginListener(IMediator* dialog, std::vector<std::string> userLists)
    : ICheckBoxListener(dialog), userLists_(userLists)
{
    std::cout << __func__ << " construct~" <<std::endl;
    loginUsername_ = new Textbox(dialog_);
    loginPassword_ = new Textbox(dialog_);
}

void LoginListener::checkboxStateChanged(std::string event, bool checked)
{
    if (!checked)
    {
        std::cout << "Not checked, enter register process." << std::endl;
        return;
    }
    std::cout << " Enter "<< __func__ << " LoginBox~" << std::endl;
    if (event == "check")
    {
        loginUsername_->setText("admin");
        loginPassword_->setText("admin123");
        std::cout << "Input username: " << loginUsername_->getText()
            << ", password: " << loginPassword_->getText() << std::endl;
    }
    else if (event == "click")
    {
        if (std::find(userLists_.begin(), userLists_.end(), loginUsername_->getText())
            != userLists_.end())
        {
            std::cout << loginUsername_->getText() << " login success." << std::endl;
        }
    }
    else if (event == "keypress")
    {
        loginUsername_->clear();
        loginPassword_->clear();
        std::cout << "clear login username and password textbox" << std::endl;
    }
    else
    {
        std::cout << event << " not support!" << std::endl;
    }
}