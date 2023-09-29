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
//Marge function
node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;

    node *p2 = head2;

    node *dummyNode = new node(-1);

    node *p3 = dummyNode;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }

        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;

        p1 = p1->next;

        p3 = p3->next;
    }

    while (p2 != NULL)
    {
        p3->next = p2;
        p3 = p3->next;

        p2 = p2->next;
    }
    return dummyNode->next;
}
node *mergeRecursive(node* &head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    node *result;

    if (head1->data < head2->data)
    {
        result = head1;

        result->next = mergeRecursive(head1->next, head2);
    }

    else
    {
        result = head2;

        result->next = mergeRecursive(head1, head2->next);
    }

    return result;
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
    insertatend(head1, 4);
    insertatend(head1, 6);
    insertatend(head1, 9);
    insertatend(head1, 11);
    insertatend(head1, 15);
    insertatend(head1, 16);
    cout << "first linked list" << endl;
    display(head1);
    node *head2 = NULL;
    insertatend(head2, 5);
    insertatend(head2, 10);
    insertatend(head2, 14);
    display(head2);
    node *newhead = mergeRecursive(head1, head2);
    //merge or recursive
    display(newhead);
    return 0;
}