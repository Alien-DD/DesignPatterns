#include <iostream>
#include <string>
#include "Dot.hpp"

Dot(std::shared_ptr<Point> dot) : dot_(dot)
{
    std::cout << "Dot construct with: dot_x = " << dot_->getPointX()
        << ", dot_y = " << dot_->getPointY() << std::endl;
}

void Dot::move(int x, int y)
{
    dot_->setPoint(x, y);
    std::cout << "Dot::move to dot_x = " << dot_->getPointX()
        << ", dot_y = " << dot_->getPointY() << std::endl;
}

void Dot::draw()
{
    std::cout << "Dot::draw dot_x = " << dot_->getPointX()
        << ", dot_y = " << dot_->getPointY() << std::endl;
}

void Dot::accept(std::shared_ptr<IVisitor> visitor)
{
    visitor->visitDot(this);
}