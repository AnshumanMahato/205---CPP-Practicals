#include <iostream>
//#include <conio.h>

class complex_no
{
    int r,i;
    public:
       complex_no()
       {
           r=0;
           i=0;
       }
       complex_no(int x, int y)
       {
           r=x;
           i=y;
       }
       complex_no operator ++(int)   //Postfix
       {
           r++;
           i++;
       }

      complex_no operator ++()  //Prefix
       {
           ++r;
           ++i;
       }

       complex_no operator --(int)   //Postfix
       {
           r--;
           i--;
       }

      complex_no operator --()  //Prefix
       {
           --r;
           --i;
       }

       int get_real()
       {
           return r;
       }

       int get_img()
       {
           return i;
       }

};


int main()
{
    complex_no c1,c2(4,3);

    std::cout << "C1 = " <<c1.get_real()<<" + "<<c1.get_img()<<'i'<<std::endl;
    std::cout << "C2 = " <<c2.get_real()<<" + "<<c2.get_img()<<'i'<<std::endl;

    c1++;
    c2++;

    std::cout << "C1 = " <<c1.get_real()<<" + "<<c1.get_img()<<'i'<<std::endl;
    std::cout << "C2 = " <<c2.get_real()<<" + "<<c2.get_img()<<'i'<<std::endl;

    ++c1;

    std::cout << "C1 = " <<c1.get_real()<<" + "<<c1.get_img()<<'i'<<std::endl;
    std::cout << "C2 = " <<c2.get_real()<<" + "<<c2.get_img()<<'i'<<std::endl;

    c2--;
    --c1;

    std::cout << "C1 = " <<c1.get_real()<<" + "<<c1.get_img()<<'i'<<std::endl;
    std::cout << "C2 = " <<c2.get_real()<<" + "<<c2.get_img()<<'i'<<std::endl;

    return 0;

    //getch();
}
