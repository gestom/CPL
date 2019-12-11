#include <stdio.h>
#include <stdlib.h>

class A
{
	public:
	void print0();
	virtual void print1();
};

void A::print0()
{
	printf("A0\n");
}

void A::print1()
{
	printf("A1\n");
}

class B:public A 
{
	public:
	void print0();
	virtual void print1();
};

void B::print0()
{
	printf("B0\n");
}

void B::print1()
{
	printf("B1\n");
}

int main()
{
	A *a = new A();
	B *b = new B();

	a = b;

	a->print0();
	b->print0();

	a->print1();
	b->print1();
	return 0;
}
