#include <iostream>
#include "Textbox.hpp"

Textbox::Textbox(IMediator* dialog) : Component(dialog)
{
    std::cout << __func__ << std::endl;
}

void Textbox::setText(std::string str)
{
    text_ = str;
    std::cout << __func__ << text_ << std::endl;
}

std::string Textbox::getText()
{
    std::cout << __func__ << text_ << std::endl;
    return text_;
}

void Textbox::clear()
{
    text_.clear();
    std::cout << __func__ << text_ << std::endl;
}