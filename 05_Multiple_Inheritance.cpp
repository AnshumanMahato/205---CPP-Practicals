#include<iostream>
//#include<conio.h>

class A
{
    public:
        A() { std::cout << "A's constructor called" << std::endl; }
};

class B
{
    public:
        B() { std::cout << "B's constructor called" << std::endl; }
};

class C: public B, public A
{
    public:
        C() { std::cout << "C's constructor called" << std::endl; }
};

int main()
{
	C c;
	return 0;
	//getch();
}
