#ifndef MODERATION_HPP
#define MODERATION_HPP

#include "IState.hpp"

class Moderation : public IState{
public:
    Moderation(std::shared_ptr<Context> context);
    virtual ~Moderation();
    void operation1() override;
    void operation2() override;
};

#endif