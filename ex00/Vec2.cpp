#include "Vec2.hpp"

Vec2::Vec2(float x, float y){
    m_x = x;
    m_y = y;
}

float Vec2::X() const{
    return m_x;
} 

float Vec2::Y() const{
    return m_y;
}

float Vec2::length()const {
    return std::sqrt((m_x*m_x)+ (m_y*m_y));
}

void Vec2::setX(float x){
    m_x = x;
}

void Vec2::setY(float y){
    m_y = y;
}

Vec2 Vec2::plus(const Vec2& v) const{
    return Vec2(m_x + v.m_x, m_y + v.m_y);
}