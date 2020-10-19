// https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm

#include <iostream>
using namespace std;

class Box
{
public:
	double getVolume() { return length * breadth * height; }
	void setLength(double len) { length = len; }
	void setBreadth(double bre) { breadth = bre; }
	void setHeight(double hei) { height = hei; }

	// Overload + operator to add two Box objects.
	Box operator+(const Box& b) 
	{
		// definition of this overloading.
		Box box;
		box.length = this->length + b.length;
		box.height = this->height + b.height;
		box.breadth = this->breadth + b.breadth;

		return box;
	}

private:
	double length;
	double breadth;
	double height;

};

int main()
{
	// Declare Box1 of type Boxes
	Box box1;
	Box box2;
	Box box3;
	double volume{ 0.0 };

	// box 1 specification
	box1.setLength(1.0);
	box1.setHeight(2.0);
	box1.setBreadth(3.0);

	// box 2 specification
	box2.setLength(1.0);
	box2.setHeight(1.0);
	box2.setBreadth(1.0);

	// volume of box 1
	volume = box1.getVolume();
	cout << volume << endl;

	// volume of box 2	
	volume = box2.getVolume();
	cout << volume << endl;

	// Add two object as follows:
	box3 = box1 + box2;
	volume = box3.getVolume();
	cout << volume << endl;

	return 0;

}

