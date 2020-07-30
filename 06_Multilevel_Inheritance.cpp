#include <iostream>
//#include<conio.h>


class MyClass
{
  public:
    void myFunction()
    {
      std::cout << "Some content in parent class." ;
    }
};

class MyChild: public MyClass {};

class MyGrandChild: public MyChild {};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
  //getch();
}
