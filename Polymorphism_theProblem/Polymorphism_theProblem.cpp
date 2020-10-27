// Section 16
// The problem of static binding: Always binds to Base::say_hello()
// no virtual keywords here, so no dynamic polymorphisms
#include <iostream>
#include <memory>	// where the smart pointers live


class Base {
public:
	void say_hello() const {
		std::cout << "Hello - I'm a Base class object" << std::endl;
	}
};

// derived class 
class Derived : public Base {
public:
	void say_hello()  const {
		std::cout << "Hello - I'm a Derived class object" << std::endl;
	}
};

// regular function expects a base object by reference, we can pass in Base or Derived
// static binding
void greetings(const Base& obj) {
	std::cout << "Greetings: ";
	obj.say_hello();
}

int main() {
	// when there's no pointers and no virtual methods, everything is static binding.
	Base b;
	b.say_hello();

	Derived d;
	d.say_hello();	 

	// static binding, the both bind to Base::say_hello()
	greetings(b);
	greetings(d);

	// ptr is a pointer to the Base obj, ptr can hold the address of any base object. 
	// Derived obj is a Base, here the Derived object created on the heap, and 
	// ptr points to the address of this obj on the heap.
	Base* ptr = new Derived();
	// However, no polymorphism, always bind to Base::say_hello()
	ptr->say_hello();

	// even we use smart pointer here, it is still static binding.
	// a unique_ptr to Base, we call ptr1 and call make_unique which creates that pointer 
	// and the pointer is a derived this time.
	std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
	ptr1->say_hello();



	delete ptr;

	return 0;
}

