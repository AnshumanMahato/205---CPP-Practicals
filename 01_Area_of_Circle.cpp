#include<iostream>
//#include <conio.h>

#define PI 3.14

int main()
{
    int rad;
    float area;

    std::cout << "Enter radius:";
    std::cin >> rad;
    area = PI * rad * rad;
    std::cout << "\nArea of Circle:" << area;
    return 0;

    //getch();
}
