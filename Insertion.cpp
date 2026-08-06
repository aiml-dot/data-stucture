#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void insert(struct node *&head, int value)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

int main()
{
    struct node *head = NULL;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);

    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }

    cout << "NULL";

    return 0;
}
