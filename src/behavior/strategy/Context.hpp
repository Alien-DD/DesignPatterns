#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include <memory>
#include "IStrategy.hpp"

class Context{
public:
    Context(std::shared_ptr<IStrategy> strategy);
    virtual ~Context() = default;
    void setStrategy(std::shared_ptr<IStrategy> strategy);
    int executeStrategy(int num1, int num2);

private:
    std::shared_ptr<IStrategy> strategy_;
};

#endif