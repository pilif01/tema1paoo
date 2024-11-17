#include "entity.h"
#include <iostream>
 
int main()
{
    Entity entity1("Object1", 50);
    Entity entity2 = entity1;            //dopy constructor
    Entity entity3 = move(entity1);      //move constructor
 
    entity2 = Entity("Object2", 100);    //move assignment operator
    entity3 = entity2;                   //copy assignment operator
 
    return 0;
}
