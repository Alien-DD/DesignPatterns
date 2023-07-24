#ifndef REGISTERLISTENER_HPP
#define REGISTERLISTENER_HPP

#include <string>
#include <vector>
#include "Textbox.hpp"
#include "ICheckBoxListener.hpp"

class RegisterListener : public ICheckBoxListener{
public:
    RegisterListener(IMediator* dialog, std::vector<std::string> userLists);
    virtual ~RegisterListener() = default;
    void checkboxStateChanged(std::string event, bool checked) override;

protected:
    Textbox *registrationUsername_, *registrationPassword_, *registrationEmail_;
    std::vector<std::string> userLists_;
};

#endif