#pragma once

#include <ostream>

class Vec2 {
private:
    double x;
    double y;

public:
    Vec2();
    Vec2(double x, double y);
    Vec2(const Vec2& other);
    Vec2& operator=(const Vec2& other);
    ~Vec2();

    double getX() const;
    double getY() const;

    void setX(double x);
    void setY(double y);
};

std::ostream& operator<<(std::ostream& stream, const Vec2& vec);
