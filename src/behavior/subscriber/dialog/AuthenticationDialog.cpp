#include <iostream>
#include <algorithm>
#include "AuthenticationDialog.hpp"
#include "../component/LoginListener.hpp"
#include "../component/RegisterListener.hpp"

AuthenticationDialog::AuthenticationDialog(std::vector<std::string> userLists)
    : userLists_(userLists)
{
    std::cout << __func__ << std::endl;
    LoginListener* loginlistener = new LoginListener(this, userLists_);
    RegisterListener* registerlistener = new RegisterListener(this, userLists_);

    loginOrRegisterChkBx_ = new Checkbox(this, true);
    loginOrRegisterChkBx_->addListener(loginlistener);
    loginOrRegisterChkBx_->addListener(registerlistener);

    okBtn_ = new Button(this);
    cancelBtn_ = new Button(this);
}

void AuthenticationDialog::notif(Component* sender, std::string event)
{
    std::cout << "AuthenticationDialog " << __func__ << std::endl;
    loginOrRegisterChkBx_->checkBoxNotif(event);
}