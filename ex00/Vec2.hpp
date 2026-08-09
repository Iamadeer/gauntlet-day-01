#pragma once

#include "iostream"
#include "cmath"

class Vec2{

public:
    Vec2(float x, float y);
    float X() const;
    float Y() const;
    float length() const;
    void setX(float x);
    void setY(float y);
    Vec2 plus(const Vec2& v) const;

private:
    float m_x;
    float m_y;

};