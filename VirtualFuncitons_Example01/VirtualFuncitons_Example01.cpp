//

#include <iostream>
#include <string>

using namespace std;

class Object
{
public:
	virtual void BeginPlay();

};

class Actor :public Object
{
public:
	virtual void BeginPlay() override;
};

class Pawn :public Actor
{
public:
	virtual void BeginPlay() override;
};

int main()
{
	Object* obj = new Object;
	obj->BeginPlay();

	Actor* actor = new Actor;
	actor->BeginPlay();

	Pawn* pwn = new Pawn;
	pwn->BeginPlay();

	delete obj;
	delete actor;
	delete pwn;
}

void Object::BeginPlay()
{
	cout << "Object::BeginPlay()\n";
}

void Actor::BeginPlay()
{
	cout << "Actor::BeginPlay()\n";
	Object::BeginPlay();	// this is the way to call parent BeginPlay().
}

void Pawn::BeginPlay()
{
	cout << "Pawn::BeginPlay()\n";
	Object::BeginPlay();
	Actor::BeginPlay();
}