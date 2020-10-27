#include <iostream> 
using namespace std;

class Rectangle {
private:
	int length;
	int breadth;
};

void UseRawPointer()
{
	// Using a raw pointer -- not recommended.
	Rectangle* rec = new Rectangle();

	// Use rec...

	// Don't forget to delete! If you forget, will cause memory leak.
	delete rec;
}


void UseSmartPointer()
{
	// Declare a smart pointer on stack and pass it the raw pointer.
	unique_ptr<Rectangle> rec2(new Rectangle());
	// Use song2...
	//...

} // rec2 is deleted automatically here.
int main()
{
	// Infinite Loop 
	while (1) {
		//UseRawPointer();
		UseSmartPointer();
	}
}
