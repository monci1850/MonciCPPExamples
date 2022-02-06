/************************************************************************/
/* How to create an abstract classes.                                   */
/************************************************************************/
#include <iostream>

using namespace std;

// To make Shape class abstract.
class Shape
{
	virtual void setX(int xcor) = 0;	// pure virtual function.
	virtual void setY(int ycor) = 0;	// provide an initializer called 0.
	virtual int getX() const = 0;
	virtual int getY() const = 0;
	virtual void draw() const = 0;
};


class Circle : public Shape
{
private:
	int x, y, radius;
public:
	Circle(int xcor, int ycor, int r)
	{
		x = xcor; y = ycor; radius = r;
	}
	// Implement all these pure virtual functions
	virtual void setX(int xcor) override;
	virtual void setY(int ycor) override;
	void setRadius(int r);
	virtual int getX() const override { return x; }
	virtual int getY() const override {return y;}
	virtual int getRadius() const { return radius; }
	virtual void draw() const override;

};

void Circle::setX(int xcor)
{
	x = xcor;
}

void Circle::setY(int ycor)
{
	y = ycor;
}

void Circle::setRadius(int r)
{
	radius = r;
}

void Circle::draw() const
{
	cout << "drawing circle at : " << getX() << " , " << getY() << 
		" with a radius of : " << getRadius() << endl;
}

int main()
{
	//Shape S1; // Error: object of abstact class is not allowed.
	Circle c1(2, 3, 5);
	c1.draw();
	return 0;
}


