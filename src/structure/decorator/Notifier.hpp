#ifndef NOTIFIER_HPP
#define NOTIFIER_HPP

#include <string>
#include <iostream>

class Notifier
{
public:
    virtual void send(std::string message);
};

#endif
