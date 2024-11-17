#include "entity.h"
#include <iostream>
 
int main()
{
    // Demonstrating the functionality of constructors
    Entity entity1("Object1", 50);
    Entity entity2 = entity1;            // Copy constructor
    Entity entity3 = move(entity1);      // Move constructor
 
    entity2 = Entity("Object2", 100);    // Move assignment operator
    entity3 = entity2;                   // Copy assignment operator
 
    return 0;
}