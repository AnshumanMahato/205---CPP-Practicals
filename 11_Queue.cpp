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

void deletion()
{
    if(first == NULL)
    {
        std::cout<< "\nUnderflow\n";
    }
    else
    {
        ptr = first;
        std::cout<< '\n' << ptr->value << " is deleted from queue\n";
        first = ptr->next;
        delete ptr;
        if(first == NULL)
        {
            last = NULL;
        }
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
    int n;
    do
    {
        std::cout<< "\nQueue Menu\n"
                 << "1. Insert\n"
                 << "2. Delete\n"
                 << "3. Display\n"
                 << "4. Exit\n"
                 << "\nEnter Choice between 1-4:";
        std::cin>> n;
        switch(n)
        {
            case 1 : insertion(); break;
            case 2 : deletion(); break;
            case 3 : display(); break;
            case 4 : std::cout<< "\nExit...";break;
            default : std::cout<< "\nInvalid Choice\n";
        }
    }
    while(n != 4);
    return 0;
}
