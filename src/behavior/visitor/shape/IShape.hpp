#ifndef ISHAPE_HPP
#define ISHAPE_HPP

#include <memory>
#include "../visitors/IVisitor.hpp"

class IShape{
public:
    virtual void move(int x, int y) = 0;
    virtual void draw() = 0;
    virtual void accept(std::shared_ptr<IVisitor> visitor) = 0;
protected:
};

#endif