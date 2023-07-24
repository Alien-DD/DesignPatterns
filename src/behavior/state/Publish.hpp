#ifndef PUBLISH_HPP
#define PUBLISH_HPP
#include "IState.hpp"

class Publish : public IState{
public:
    Publish(std::shared_ptr<Context> context);
    virtual ~Publish();
    void operation1() override;
    void operation2() override;
};

#endif