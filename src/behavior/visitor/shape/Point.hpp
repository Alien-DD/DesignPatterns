#ifndef POINT_HPP
#define POINT_HPP

class Point{
public:
    Point(int x, int y) : point_x(x), point_y(y)
    {
    }
    virtual ~Point() = default;
    int getPointX()
    {
        return point_x;
    }
    int getPointY()
    {
        return point_y;
    }
    void setPoint(int x, int y)
    {
        point_x = x;
        point_y = y;
    }
private:
    int point_x, point_y;
};

#endif