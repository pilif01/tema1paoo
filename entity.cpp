#include "entity.h"
#include <iostream>
#include <algorithm>
 
// Constructor
Entity::Entity(const string &entity_name, int entity_size)
    : name(entity_name), size(entity_size), data(new int[entity_size])
{
    cout << "Entity constructor: " << name << ", size: " << size << endl;
}
 
// Copy constructor
Entity::Entity(const Entity& other)
    : name(other.name), size(other.size), data(new int[other.size])
{
    copy(other.data, other.data + size, data);
    cout << "Entity copy constructor: " << name << endl;
}
 
// Move constructor
Entity::Entity(Entity&& other) noexcept
    : name(move(other.name)), size(other.size), data(other.data)
{
    other.data = nullptr;
    other.size = 0;
    cout << "Entity move constructor: " << name << endl;
}
 
// Destructor
Entity::~Entity()
{
    delete[] data;
    cout << "Entity destructor: " << name << endl;
}
 
// Copy assignment operator
Entity& Entity::operator=(const Entity& other)
{
    if (this != &other) {
        delete[] data;
        name = other.name;
        size = other.size;
        data = new int[size];
        copy(other.data, other.data + size, data);
        cout << "Entity copy assignment operator: " << name << endl;
    }
    return *this;
}
 
// Move assignment operator
Entity& Entity::operator=(Entity&& other) noexcept
{
    if (this != &other) {
        delete[] data;
        name = move(other.name);
        size = other.size;
        data = other.data;
        other.data = nullptr;
        other.size = 0;
        cout << "Entity move assignment operator: " << name << endl;
    }
    return *this;
}
 
// Getter for name
string Entity::getName() const
{
    return name;
}