#ifndef AUTHENTICATION_DIALOG_HPP
#define AUTHENTICATION_DIALOG_HPP

#include <string>
#include <vector>
#include "IMediator.hpp"
#include "../component/Checkbox.hpp"
#include "../component/Textbox.hpp"
#include "../component/Button.hpp"

class AuthenticationDialog : public IMediator{
public:
    AuthenticationDialog(bool isChecked, std::vector<std::string> userLists);
    void notif(Component* sender, std::string event) override;
    Button *okBtn_, *cancelBtn_;
    Checkbox *loginOrRegisterChkBx_;
    std::string title_;
    Textbox *loginUsername_, *loginPassword_;
    Textbox *registrationUsername_, *registrationPassword_, *registrationEmail_;
    std::vector<std::string> userLists_;
};

#endif