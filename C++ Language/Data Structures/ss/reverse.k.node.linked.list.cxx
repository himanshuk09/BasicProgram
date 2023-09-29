
#include <iostream>
//#include<bits/c++.h>
using namespace std;
//node structure
class node
{
  public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

//insert at head
void insertathead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

//insert at end
void insertatend(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
//display function
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
//reverse k node
node *reverseknode(node *&head, int k)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reverseknode(nextptr, k);
    }
    return prevptr;
}

int main()
{
    node *head = NULL;
    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head, 4);
    insertatend(head, 5);
    insertatend(head, 6);
    display(head);
    int k=2;
    node *newhead=reverseknode(head,k);
    display(newhead);

    return 0;
}