#include <iostream>
#include <string>
#include "Circle.hpp"

Circle(std::shared_ptr<Point> centre, int radius)
    : centre_(centre), radius_(radius)
{
    std::cout << "Circle construct with: centre_x = " << centre_->getPointX
        << ", centre_y = " << centre_->getPointY
        << ", radius = " << radius << std::endl;
}

void Circle::move(int x, int y)
{
    centre_->setPoint(x, y);
    std::cout << "Circle::move to centre_x = " << centre_->getPointX()
        << ", centre_y = " << centre_->getPointY()
        << ", radius = " << radius << std::endl;
}

void Circle::draw()
{
    std::cout << "Circle::draw centre_x = " << centre_->getPointX()
        << ", centre_y = " << centre_->getPointY()
        << ", radius = " << radius << std::endl;
}

void Circle::accept(std::shared_ptr<IVisitor> visitor)
{
    visitor->visitCircle(this);
}