#include "Vec2.hpp"
#include "iostream"


int main (){
    const Vec2 a = Vec2(3,4);
    std::cout << "a = (" << a.X() << ", "<< a.Y()<< "), length " << a.length() << "\n";
    Vec2 b = Vec2(1,2);
    std::cout << "b = (" << b.X() << ", "<< b.Y()<< "), length " << b.length() << "\n";
    Vec2 sum = a.plus(b);
    std::cout << "a + b = (" << sum.X() << ", "<< sum.Y()<< ")\n";
    b.setX(10);
    std::cout << "b is now (" << b.X() << "," << b.Y()<< ")\n";
}