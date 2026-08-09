#include "EnemySpawner.hpp"
#include "iostream"

int main(){
    EnemySpawner spawner = EnemySpawner(2);
    std::cout <<"spawned " << spawner.spawn() << '\n';
    std::cout <<"spawned " << spawner.spawn() << '\n';
    std::cout <<"spawned " << spawner.spawn() << '\n';
    std::cout <<"total " << spawner.getSpawned() << '\n';

}