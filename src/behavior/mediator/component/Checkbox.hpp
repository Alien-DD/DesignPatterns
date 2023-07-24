#ifndef CHECKBOX_HPP
#define CHECKBOX_HPP

#include <string>
#include "Component.hpp"

class Checkbox : public Component{
public:
    Checkbox(IMediator* dialog, bool checked);
    virtual ~Checkbox() = default;
    void check();
    bool checked;
};

#endif