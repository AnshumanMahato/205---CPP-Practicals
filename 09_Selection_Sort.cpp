#include <iostream>

int main()
{
    int a[]={80,35,11,65,10},i,j,temp;

    std::cout << "Array Before Sorting:\n";

    for(j=0;j<5;j++)
            std::cout<<a[j]<<' ';
    std::cout<<std::endl;

    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

        }
    }

    std::cout<<"\nArray after Sorting:\n";
    for(j=0;j<5;j++)
            std::cout<<a[j]<<' ';
    std::cout<<std::endl;

    return 0;
}
