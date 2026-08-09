#pragma once
#include "iostream"

class EnemySpawner{

public:
    EnemySpawner(int maxCount);
    int spawn();
    int getSpawned();

private:
    const int m_count;
    int m_spawned;
};