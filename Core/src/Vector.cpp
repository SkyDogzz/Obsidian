#include "Vector.hpp"

Vec2::Vec2()
    : x(0)
    , y(0)
{
}

Vec2::Vec2(double x, double y)
    : x(x)
    , y(y)
{
}

Vec2::Vec2(const Vec2& other)
    : x(other.getX())
    , y(other.getY())
{
}

Vec2& Vec2::operator=(const Vec2& other)
{
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

Vec2::~Vec2() { }

double Vec2::getX() const { return x; }

double Vec2::getY() const { return y; }

void Vec2::setX(double x) { this->x = x; }

void Vec2::setY(double y) { this->y = y; }

std::ostream& operator<<(std::ostream& stream, const Vec2& vec)
{
    return stream << "x: " << vec.getX() << " y: " << vec.getY() << std::endl;
}
