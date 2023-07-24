#ifndef ISTRATEGY_HPP
#define ISTRATEGY_HPP

#include <string>

class IStrategy{
public:
    IStrategy(std::string name):name_(name) {}
    virtual int execute(int num1, int num2) = 0;
protected:
    std::string name_;
};

#endif