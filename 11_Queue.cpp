#include <iostream>

struct node
{
    int value;
    node* next;
};

node *first = NULL, *last = NULL, *ptr;

void insertion()
{
    ptr = new node;
    std::cout<< "\nEnter Value:";
    std::cin>> ptr->value;
    ptr->next = NULL;
    if(first == NULL)
    {
        first = last = ptr;
    }
    else
    {
        last->next = ptr;
        last = ptr;
    }
}


void display()
{
    ptr = first;
    if(ptr == NULL)
    {
        std::cout<< "\nUnderflow\n";
    }
    else
    {
        while(ptr != NULL)
        {
            std::cout<< ptr->value << ' ';
            ptr = ptr->next;
        }
    }

}

int main()
{
    char ch;
    do
    {
        insertion();
        std::cout<<"\nWould you like to add another node (y/n):";
        std::cin>>ch;
    }
    while(ch == 'y');
    std::cout << std::endl << "Queue created...." << std::endl;
    display();
    return 0;
}
