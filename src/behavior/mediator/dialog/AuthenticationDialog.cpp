#include <iostream>
#include <algorithm>
#include "AuthenticationDialog.hpp"

AuthenticationDialog::AuthenticationDialog(bool isChecked, std::vector<std::string> userLists)
{
    std::cout << __func__ << std::endl;
    loginUsername_ = new Textbox(this);
    loginPassword_ = new Textbox(this);

    registrationUsername_ = new Textbox(this);
    registrationEmail_ = new Textbox(this);
    registrationPassword_ = new Textbox(this);

    userLists_ = userLists;
}

void AuthenticationDialog::notif(Component* sender, std::string event)
{
    std::cout << __func__ << std::endl;
    if (sender == loginOrRegisterChkBx_ and event == "check")
    {
        if (loginOrRegisterChkBx_->checked)
        {
            title_ = "login";
            std::cout << " Enter "<< title_ << " UI~" << std::endl;
            loginUsername_->setText("admin");
            loginPassword_->setText("admin123");
            std::cout << "username: " << loginUsername_->getText()
                << ", password: " << loginPassword_->getText() << std::endl;
        }
        else
        {
            title_ = "register";
            std::cout << " Enter "<< title_ << " UI~" << std::endl;
            registrationUsername_->setText("abcd");
            registrationEmail_->setText("123456@qq.com");
            registrationPassword_->setText("abcd123456");
            std::cout << "username: " << registrationUsername_->getText()
                << ", email: " << registrationEmail_->getText()
                << ", password: " << registrationPassword_->getText() << std::endl;
        }
    }

    if (sender == okBtn_ && event == "click")
    {
        if (loginOrRegisterChkBx_->checked)
        {
            if (std::find(userLists_.begin(), userLists_.end(), loginUsername_->getText())
                != userLists_.end())
            {
                std::cout << loginUsername_->getText() << " login success." << std::endl;
            }
        }
        else
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
    }

    if (sender == cancelBtn_ && event == "keypress")
    {
        if (loginOrRegisterChkBx_->checked)
        {
            loginUsername_->clear();
            loginPassword_->clear();
            std::cout << "clear login username and password textbox" << std::endl;
        }
        else
        {
            registrationUsername_->clear();
            registrationEmail_->clear();
            registrationPassword_->clear();
            std::cout << "clear register username, email and password textbox" << std::endl;
        }
    }    

}