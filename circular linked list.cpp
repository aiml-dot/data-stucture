#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
   int data;
   struct node*next;
	
};

int main()
{
	 struct node *head = NULL;

    
    struct node *newnode = new node();

    newnode->data = 10;
    newnode->next = newnode;

    head = newnode;

    cout << "Data = " << head->data<<endl;
    cout << "next data = " <<head->next->data<<endl;
    
	
}