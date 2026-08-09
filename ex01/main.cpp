#include "Timer.hpp"
#include "iostream"

int main(){
    Timer t = Timer(0);
    t.advance(16);
    std::cout <<t.elapedMs() <<"\n";
}