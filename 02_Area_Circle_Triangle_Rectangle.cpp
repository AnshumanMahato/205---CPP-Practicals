#include<iostream>
#include<math.h>
//#include <conio.h>

#define PI 3.14

float area(int rad)
{
    return (PI * rad * rad);
}

float area(int a, int b, int c)
{
    float s = (a + b + c)/2;
    return (sqrt( s * (s-a) * (s-b) * (s-c) ));
}

float area(int len, int br)
{
    return (len * br);
}

int main()
{
    int a, b, c;

    std::cout << "Enter radius of circle:";
    std::cin >> a;
    std::cout << "Area of Circle:" << area(a) << std::endl;

    std::cout << "Enter length and breadth of rectangle:";
    std::cin >> a >> b;
    std::cout << "Area of Rectangle:" << area(a,b) << std::endl;

    std::cout << "Enter three sides of triangle:";
    std::cin >> a >> b >> c;
    std::cout << "Area of Triangle:" << area(a,b,c) << std::endl;

    return 0;

    //getch();
}
