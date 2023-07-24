#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

#include <string>
#include "Component.hpp"

class Textbox : public Component{
public:
    Textbox(IMediator* dialog);
    virtual ~Textbox() = default;
    void setText(std::string str);
    std::string getText();
    void clear();
private:
    std::string text_;
};

#endif