#ifndef LOGINLISTENER_HPP
#define LOGINLISTENER_HPP

#include <string>
#include <vector>
#include "Textbox.hpp"
#include "ICheckBoxListener.hpp"

class LoginListener : public ICheckBoxListener{
public:
    LoginListener(IMediator* dialog, std::vector<std::string> userLists);
    virtual ~LoginListener() = default;
    void checkboxStateChanged(std::string event, bool checked) override;

protected:
    Textbox *loginUsername_, *loginPassword_;
    std::vector<std::string> userLists_;
};

#endif