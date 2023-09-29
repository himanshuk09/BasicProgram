
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
void intersect(node *&head1, node *&head2, int pos)
{
    node *temp1 = head1;
    pos--;
    while (pos--)
    {
        temp1 = temp1->next;
    }
    node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    temp2->next = temp1;
}

int length(node *head)
{
    node *temp = head;
    int l = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}

int intersection(node *&head1, node *&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    node *ptr1;
    node *ptr2;
    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while (d)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        d--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data== ptr2->data)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
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

int main()
{
    node *head1 = NULL;
    insertatend(head1, 1);
    insertatend(head1, 2);
    insertatend(head1, 3);
    insertatend(head1, 4);
    insertatend(head1, 5);
    insertatend(head1, 6);
    cout << "first linked list" << endl;
    display(head1);
    node *head2 = NULL;
    insertatend(head2, 7);
    insertatend(head2, 8);
  insertatend(head2, 9);
    cout << "second linked list" << endl;
    display(head2);
    intersect(head1, head2, 4);
    display(head2);
    cout << intersection(head1, head2) << endl;
    return 0;
}