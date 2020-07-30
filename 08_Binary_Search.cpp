#include <iostream>
//#include <conio.h>

int main()
{
    int t, mid, low = 0, high = 9, pos = -1, arr[] = {1,2,3,4,5,6,7,8,9,10};

    std::cout << "Enter no. for searching:";
    std::cin >> t;

    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == t)
        {
            pos = mid;
            std::cout << t <<" is at position " << pos;
            break;
        }
        else if(arr[mid] < t)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(pos == -1)
        std::cout<< "No. not Found...";

    return 0;

    //getch()
}
