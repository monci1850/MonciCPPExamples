// Move Constructor 
#include <iostream>
#include <vector>

using namespace std;

class Move {
private:
	int* data;	// raw pointer
public:
	void set_data_value(int d) { *data = d; }
	int get_data_value() { return *data; }
	
	// Constructor
	Move(int d);
	
	// Copy Constructor
	Move(const Move& source);
	
	// Move Constructor prototype
	Move(Move&& source) noexcept;
	
	// Destructor
	~Move();
};

Move::Move(int d) {
	data = new int;
	*data = d;
	cout << "Constructor for: " << d << endl;
}

// Copy constructor
Move::Move(const Move& source)
	: Move{ *source.data } {
	cout << "Copy constructor  - deep copy for: " << *data << endl;
}


//Move constructor
Move::Move(Move&& source) noexcept // no const
	: data{ source.data } {
	source.data = nullptr;
	cout << "Move constructor - moving resource: " << *data << endl;
}

// destructor
Move::~Move() {
	/*
	*  it will let us know if we are destroying those objects that we just moved in
	*or be really easy to see when it says nullptr
	*/
	if (data != nullptr) {
		cout << "Destructor freeing data for: " << *data << endl;
	}
	else {
		cout << "Destructor freeing data for nullptr" << endl;
	}
	delete data;
}

int main() {
	vector<Move> vec;

	/* no variable name here( Move{10}), so will create a temp object, which is an r-value
	*first allocate that temp object on the heap and store whatever we passed it into it.
	* And then we're in the copy constructor because remember we just created this temporary object.
	* So this temporary and needs to be copied into the vector.
	*/
	vec.push_back(Move{ 10 });	

	vec.push_back(Move{ 20 });
	vec.push_back(Move{ 30 });
	//vec.push_back(Move{ 40 });
	//vec.push_back(Move{ 50 });
	//vec.push_back(Move{ 60 });
	//vec.push_back(Move{ 70 });
	//vec.push_back(Move{ 80 });


	return 0;
}

