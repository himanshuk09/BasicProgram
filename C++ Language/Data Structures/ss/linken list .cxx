
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
void insertathead(node *&head, int val) // &head call by reference
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

//insert at end
void insertatend(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL) //if there is no node
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

//deletion at head
void deletionathead(node *&head)
{
    node *todelete = head;
    head = head->next;

    delete todelete;
}

//deletion at val
void deletion(node *&head, int val)
{
    if (head == NULL) //IF linked list has       null
    {
        return;
    }
    if (head->next == NULL) //IF LINED LIST HAS ONLY ONE NODE
    {
        deletionathead(head);
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

//searching
int search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

//reverse by iterative
node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

//reverse by recursive
node *reverserecursively(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newhead = reverserecursively(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
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

//main function
int main()
{
    node *head = NULL;
    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    // display(head);
    //cout << search(head, 1) << endl;
    insertathead(head, 4);
    display(head);
    //  deletion(head, 3);
    //    deletionathead(head);
    //  node *newhead = reverse(head);
    //    display(newhead);
    node *newhead = reverserecursively(head);
    display(newhead);
    return 0;
}
