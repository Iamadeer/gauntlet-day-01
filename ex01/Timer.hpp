#pragma once
#include "iostream"

class Timer{

public:
    Timer(int startMs);
    void advance(int deltaMs);
    int elapedMs() const;

private:
    int m_elapsedMs;

};