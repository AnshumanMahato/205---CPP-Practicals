#include<bits/stdc++.h>
//#include<iostream.h>
//#include<conio.h>

struct tag
{
    int data;
    tag *next;
};

tag *head = NULL, *node, *temp;
int nodes=1;

void create_list()
{
    char ch;
    node = new tag;
    std::cout<< "Enter a no.:" ;
    std::cin>> node->data;
    node->next = NULL;
    head = node;
    std::cout<<"\nWould you like to add another node (y/n):";
    std::cin>>ch;
    while(ch == 'y')
    {
        temp = new tag;
        std::cout<< "Enter a no.:" ;
        std::cin>> temp->data;
        temp->next = NULL;
        node->next = temp;
        node = temp;
        std::cout<<"\nWould you like to add another node (y/n):";
        std::cin>>ch;
        nodes++;
    }
}

void display()
{
    node = head;
    while(node != NULL)
    {
        std::cout<<node->data<<' ';
        node = node->next;
    }
}

int main()
{
    create_list();
    std::cout << std::endl << "Linked list created...." << std::endl;
    display();
    std::cout << "\nTotal Nodes=" << nodes;
    return 0;
}
