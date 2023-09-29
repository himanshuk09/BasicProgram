
#include<iostream>
//#include<bits/c++.h>
using namespace std;

int main()
{  
     int a=10;
     cout<<a<<endl;
     int *p=new int();
     *p=10;
     cout<<"*p   " <<*p<<endl;
     cout<<"p     "<<p<<endl;
     delete(p);
     cout<<"p    "<<p<<endl;
     cout<<"*p   "<<*p<<endl;
     p=new int[4];
     delete []p;
     cout<<"p[] "<<*p<<endl;
     p=NULL;
  cout<<"p "<<p;
     return 0; 
}