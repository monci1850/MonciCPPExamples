/*
The example demonstrates the following essential steps for using smart pointers.

Declare the smart pointer as an automatic (local) variable. (Do not use the new or malloc expression on the smart pointer itself.)

In the type parameter, specify the pointed-to type of the encapsulated pointer.

Pass a raw pointer to a new-ed object in the smart pointer constructor. (Some utility functions or smart pointer constructors do this for you.)

Use the overloaded -> and * operators to access the object.

Let the smart pointer delete the object.
*/

#include <iostream>

class LargeObject
{
public:
	void DoSomething() {}
};

void ProcessLargeObject(const LargeObject& lo) {}

void LegacyLargeObjectFunction(LargeObject* lo) {}

void SmartPointerDemo()
{
	// Create the object and pass it to a smart pointer
	// 
	std::unique_ptr<LargeObject> pLarge(new LargeObject());
	
	//Call a method on the object
	pLarge->DoSomething();

	// Pass a reference to a method.
	ProcessLargeObject(*pLarge);

	/* Free the memory before we exit function block.
	* Smart pointers have their own member functions, which are accessed by using "dot" notation. 
	*/
	pLarge.reset();

	// Pass raw pointer to a legacy API
	LegacyLargeObjectFunction(pLarge.get());

} //pLarge is deleted automatically when function block goes out of scope.



int main()
{
	return 0;
}

