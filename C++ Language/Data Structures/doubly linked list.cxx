
#include <iostream>
//#include<bits/c++.h>
using namespace std;
//node structure
class node
{
  public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

//insert at head
void insertathead(node *&head, int val) // &head call by reference
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
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
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
//deletion at head
void deleteathead(node *&head)
{
    node *todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}

//deletion at pos
void deletionatpos(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteathead(head);
        return;
    }
    node *temp = head;
    int count = 1;
    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL) //when pos is a last node
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
}
//display function
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head, 4);
    cout<<"linked list";
    display(head);
    insertathead(head, 5);
    display(head);
    deletionatpos(head,1);
    display(head);

    return 0;
}