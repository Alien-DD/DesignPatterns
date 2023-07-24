#ifndef AUTHENTICATION_DIALOG_HPP
#define AUTHENTICATION_DIALOG_HPP

#include <string>
#include <vector>
#include "IMediator.hpp"
#include "../component/Checkbox.hpp"
#include "../component/Button.hpp"

class AuthenticationDialog : public IMediator{
public:
    AuthenticationDialog(std::vector<std::string> userLists);
    void notif(Component* sender, std::string event) override;
    Button *okBtn_, *cancelBtn_;
    Checkbox *loginOrRegisterChkBx_;
    std::vector<std::string> userLists_;
};

#endif