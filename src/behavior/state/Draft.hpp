#ifndef DRAFT_HPP
#define DRAFT_HPP

#include "IState.hpp"

class Draft : public IState{
public:
    Draft(std::shared_ptr<Context> context);
    virtual ~Draft();
    void operation1() override;
    void operation2() override;
};

#endif