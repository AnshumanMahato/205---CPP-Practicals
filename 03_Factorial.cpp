#include <iostream>
//#include <conio.h>

class number
{
   private:
      int n;
   public:
      number()
      {
          std::cout << "Enter No.:";
          std::cin >> n;
      }
      int factorial();
};

int number::factorial()
{
    int f=1,i;
    if(n==0)
        return 0;
    else
    {
        i = n;
        while(i != 0)
        {
            f *= i--;
        }
        return f;
    }
}

int main()
{
    number no;
    std::cout << "Factorial:" << no.factorial();
    return 0;

    //getch();
}
