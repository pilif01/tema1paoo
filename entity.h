#pragma once
 
#include <string>
using namespace std;
 
class Entity {
private:
    string name;
    int *data;
    int size;
 
public:
    Entity(const string &entity_name, int entity_size);
    Entity(const Entity& other);
    Entity(Entity&& other) noexcept;
    ~Entity();
 
    Entity& operator=(const Entity& other);
    Entity& operator=(Entity&& other) noexcept;
 
    string getName() const;
};