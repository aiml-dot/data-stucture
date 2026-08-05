#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{  
    int data;
    struct node* prev;
    struct node* next;
};

int main()
{
	node *newnode = (struct node*)malloc(sizeof(struct node));
	   
	newnode -> data = 10;
	newnode -> prev = NULL;
	newnode -> next = NULL;
	
	cout<<"Data:" <<newnode -> data <<endl;
	cout<<"previous:" <<newnode -> prev <<endl;
	cout<<"next:" <<newnode -> next <<endl;
	
}