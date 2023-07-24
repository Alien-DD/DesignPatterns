#ifndef ISATE_HPP
#define ISATE_HPP
#include <iostream>
#include <memory>
#include "Context.hpp"

class Context;
class IState{
public:
    IState(std::shared_ptr<Context> context) : context_(context)
    {
        std::cout << __func__ << "construct" <<std::endl;
    }

    virtual ~IState()
    {
        std::cout << __func__ <<std::endl;
    }

    virtual void operation1() = 0;
    virtual void operation2() = 0;
protected:
    std::shared_ptr<Context> context_;
};

#endif