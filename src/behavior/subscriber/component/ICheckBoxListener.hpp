#ifndef ICHECKBOX_LISTENER_HPP
#define ICHECKBOX_LISTENER_HPP

#include <string>

class ICheckBoxListener{
public:
    ICheckBoxListener(IMediator* dialog) : dialog_(dialog)
    {

    }
    virtual void checkboxStateChanged(std::string event, bool checked) = 0;
protected:
    IMediator* dialog_;
};

#endif