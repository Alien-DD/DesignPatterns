#ifndef IVISITOR_HPP
#define IVISITOR_HPP

#include <memory>
#include "../shape/Dot.hpp"
#include "../shape/Circle.hpp"
#include "../shape/Rectangle.hpp"

class IVisitor{
public:
    virtual void visitDot(std::shared_ptr<Dot> dot) = 0;
    virtual void visitCircle(std::shared_ptr<Circle> circle) = 0;
};

#endif