
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
// make cycle
void makeCycle(node *&head, int pos)

{
    node *temp = head;

    node *startNode;

    int count = 1;

    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }
        temp = temp->next;

        count++;
    }
    temp->next = startNode;
}
// detect cycle
//Hare and Tortoise Algorithm
bool detectCycle(node *&head)
{
    node *slow = head;

    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;//ttortoise 🐢 run by one step

        fast = fast->next->next;//hare run by two steps

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
//remove cycle
//Floyd's Algorithm
void removeCycle(node *&head)
{
    node *slow = head;

    node *fast = head;

    do

    {
        slow = slow->next;

        fast = fast->next->next;

    } while (slow != fast);
    fast = head;

    while (slow->next != fast->next)
    {
        slow = slow->next;

        fast = fast->next;
    }

    slow->next = NULL;
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
    node *head = NULL;
    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head, 4);
    insertatend(head, 5);
    insertatend(head, 6);
    insertatend(head, 7);
    insertatend(head, 8);
    makeCycle(head, 6);
 //   display(head);
    cout << detectCycle(head)<<endl;
    removeCycle(head);
    display(head);
    return 0;
}





//Distance moved by fast ptr = 2 x Distance moved by slow ptr

//m+n+l*j=2* (m+n + l*i)

//m+n=l*(j-2*₁)

//m=l*(j-2*i) - n
