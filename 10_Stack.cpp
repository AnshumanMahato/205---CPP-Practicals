#include <iostream>
//#include <conio.h>

int arr[10], top = -1;

void push()
{
    if(top < 9)
    {
        std::cout << "\nEnter Value:";
        std::cin >> arr[++top];
    }
    else
        std::cout << "\nStack Overflow";

}

void pop()
{
    if(top == -1)
    {
        std::cout<< "\nUnderflow\n";
    }
    else
        std::cout<< '\n' << arr[top--] << " is popped\n";
}

int main()
{
    int n;
    do
    {
        std::cout<< "\nStack Menu\n"
                 << "1. Push\n"
                 << "2. Pop\n"
                 << "3. Exit\n"
                 << "\nEnter Choice between 1-3 :";
        std::cin>> n;
        switch(n)
        {
            case 1 : push(); break;
            case 2 : pop(); break;
            case 3 : std::cout<<"\nExit..."; break;
            default : std::cout<< "\nInvalid Choice\n";
        }
    }
    while(n != 3);
    return 0;
}

