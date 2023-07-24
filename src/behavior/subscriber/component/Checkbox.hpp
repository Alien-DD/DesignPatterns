#ifndef CHECKBOX_HPP
#define CHECKBOX_HPP

#include <string>
#include <vector>
#include "Component.hpp"
#include "ICheckBoxListener.hpp"

class Checkbox : public Component{
public:
    Checkbox(IMediator* dialog, bool checked);
    virtual ~Checkbox() = default;
    void check();
    void addListener(ICheckBoxListener* comp);
    void removeListener(ICheckBoxListener* comp);
    void checkBoxNotif(std::string event);
    bool checked;
private:
    std::vector<ICheckBoxListener*> listeners;
};

#endif