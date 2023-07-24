#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include <string>
#include <memory>
#include "IState.hpp"

class IState;
class Context{
public:
    Context();
    virtual ~Context();
    void changeState(std::shared_ptr<IState> state);
    void setStr(std::string str);
    std::string getStr();
    void operation1();
    void operation2();

private:
    std::weak_ptr<IState> state_;
    std::string str_;
};

#endif