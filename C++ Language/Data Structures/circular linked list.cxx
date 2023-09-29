
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
//insertathead
void insertathead(node *&head, int val) // &head call by reference
{
    node *n = new node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}
//insert at end
void insertatend(node *&head, int val)
{
    if (head == NULL) //if there is no node
    {
        insertathead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}
void deleteAthead(node *&head)
{
    node *temp = head;
    while (temp->next !=head)
    {
        temp = temp->next;
    }

    node *todelete =head;

    temp->next =head->next;

    head = head->next;

    delete todelete;
}
void deletion(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAthead(head);
        return;
    }
    node *temp = head;

    int count = 1;

    while (count != pos - 1)
    {
        temp = temp->next;

        count++;
    }

    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
//display function
void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << "  ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}
int main()
{
    node *head = NULL;
    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head, 4);
    insertatend(head, 5);
    display(head);
    insertathead(head, 6);
    display(head);
    deletion(head,5);
    display(head);
    deletion(head,1);
    display(head);
    return 0;
}