#ifndef DOT_HPP
#define DOT_HPP

#include "IShape.hpp"
#include "Point.hpp"

class Dot : public IShape{
public:
    Dot(std::shared_ptr<Point> dot);
    virtual ~Dot() = default;
    void move(int x, int y) override;
    void draw() override;
    void accept(std::shared_ptr<IVisitor> visitor) override;
private:
    std::shared_ptr<Point> dot_;
};

#endif