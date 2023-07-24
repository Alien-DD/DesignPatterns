#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "IShape.hpp"
#include "Point.hpp"

class Circle : public IShape{
public:
    Circle(std::shared_ptr<Point> centre, int radius);
    virtual ~Circle() = default;
    void move(int x, int y) override;
    void draw() override;
    void accept(std::shared_ptr<IVisitor> visitor) override;
private:
    std::shared_ptr<Point> centre_;
    int radius_;
};

#endif