#include <iostream>
#include "Actor.h"
using namespace std;

void Actor::BeginPlay()
{
    cout << "Actor BeginPlay() called. \n\n";
}

void Actor::ActorFunction()
{
    cout << "ActorFunction() called. \n\n";
}
