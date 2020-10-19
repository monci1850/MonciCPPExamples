/*
Friend Class A friend class can access private and protected members of other class in which it is declared as friend.
It is sometimes useful to allow a particular class to access private members of other class.
*/

#include <iostream>
using namespace std;

/************************
*demonstrate friend class
************************/

class APlayer
{
public:
	void publicGreeting()
	{
		cout << "this is public greeting!" << endl;
	}
protected:
	void protectedGreeting()
	{
		cout << "this is protected greeting!" << endl;
	}
	friend class BPlayer;	// declare that B is friend of A.

private:
	int health;
	int xp;
	void privateGreeting()
	{
		cout << "Hi, there! Private greeting!" << endl;
	}

	//friend class BPlayer; // declare that B is friend of A.
};


class BPlayer
{
public:
	void showAPlayer(APlayer &a)
	{
		a.publicGreeting();

		// you could either declare friend under protected or private.
		a.protectedGreeting();	// 

		a.privateGreeting();
	}
};


class CPlayer : public APlayer
{
public:
	void visitProtectedGreating()
	{
		protectedGreeting();
	}
};


/*********************************************
*demonstrate friend function of another class
*********************************************/

class E; // forward declare,  to avoid error.

class F
{
public:
	void ShowE1(E& e);
	void ShowE2(E& e);

protected:
private:
};


class E
{
public:
	E() { health = 5; }

protected:
private:
	int health;
	friend void F::ShowE1(E& e);
	//friend void F::ShowE2(E& e);
};

void F::ShowE1(E& e)
{
	cout << e.health << endl;
}

void F::ShowE2(E& e)
{
	//cout << e.health << endl;	// error, ShowE2 is not declared as friend in class E.
}

/**************************
*demonstrate global friend 
**************************/

class H
{
private:
	int hot;
public:
	H() { hot = 99; }
	friend void showH(H&);
protected:

};

void showH(H& h_obj)
{
	cout << h_obj.hot << endl; 
}


int main()
{
	APlayer a;
	BPlayer b;
	CPlayer c;

	a.publicGreeting();

	b.showAPlayer(a);	// access private and protected members of a.

	c.publicGreeting();

	c.visitProtectedGreating();


	E e;
	F f;
	f.ShowE1(e);


	H h;
	showH(h);

	return 0;

}

