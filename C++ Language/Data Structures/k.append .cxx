
#include<iostream>
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
// find length 
int length (node* &head)
{
   int l=0;
   node * temp=head;
   while(temp!=NULL)
   {
      temp=temp->next;
      l++;
   }
   return l;
}
// k append 
node * kappend(node *&head,int k)
{
    node * newhead;
    node * newtail;
    node * tail=head;
    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next!=NULL)
    {
       if(count==l-k)
       {
          newtail=tail;
       }
       if (count==l-k+1)
       {
          newhead=tail;
       }
       tail=tail->next;
    count++;
    }
    newtail->next=NULL;
    tail->next=head;
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
int main()
{  
     node *head = NULL;
    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head,4);
    insertatend(head,5);
    insertatend(head,6);
    display(head);
    node * newhead=kappend(head,3);
    display(newhead);
  
     return 0; 
}