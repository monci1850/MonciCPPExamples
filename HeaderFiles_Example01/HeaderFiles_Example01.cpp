//

#include <iostream>
#include "Object.h"
#include "Actor.h"
#include "Pawn.h"
using namespace std;

void TestCastingFromInheritance();

int main()
{
    TestCastingFromInheritance();
    system("pause");
}


void TestCastingFromInheritance()
{
    // dynamically create 3 new objs on the heap
    Object* ptr2objcet = new Object;
    Actor* ptr2actor = new Actor;
    Pawn* ptr2pawn = new Pawn;

    // create an array to hold object pointers
    Object* ObjectArray[] = { ptr2objcet, ptr2actor, ptr2pawn };

    for (int i = 0; i < 3; i++)
    {
        cout << "Loop " << i << endl;
        // they both have these two functions.
        //ObjectArray[i]->BeginPlay();
        //ObjectArray[i]->ObjectFunction();

        //ObjectArray[i]->ActorFunction();  // ERROR: Object has no member ActorFunction()

        // Need a dynamic check at runtime to see if its a resonalble cast. A static cast will not do that.
        // first, create a temp new obj to represent each element.
        Object* obj = ObjectArray[i];

        // try to convert to Actor* type, tye to cast.
        Actor* act = dynamic_cast<Actor*>(obj); // return Null ptr if the cast is unsccessful.

        // Actor * act = static_cast<Actor*>(obj); // will not check cast at runtime.

        if (act) // Null pointer is 0
        {
            act->ActorFunction();
        }
        else
        {
            cout << "Attempting cast to Actor* failed.\n\n";
        }

        // try to cast to Pawn.
        Pawn* pwn = dynamic_cast<Pawn*>(obj);
        //Pawn* pwn = static_cast<Pawn*>(obj);

        if (pwn)
        {
            pwn->PawnFunction();
        }
        else
        {
            cout << "Attempting cast to Pawn* failed.\n\n";
        }
    }

    delete ptr2objcet;
    delete ptr2actor;
    delete ptr2pawn;
}


