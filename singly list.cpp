#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{  
     int data;
     struct node*next;

};

int main()
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = 10;
    newnode -> next = NULL;
    
    cout << "Data = " << newnode->data;
    cout << "\n next = " <<newnode->next;
}