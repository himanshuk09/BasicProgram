
#include<iostream>
//#include<bits/c++.h>
using namespace std;

int main()
{  
     char *p;
     p="Hello";
     cout<<*&*p;
  cout<<"p" <<p<<endl;
  cout<<"*p"<<*p<<endl;
  cout<<"&p"<<&p<<endl;
  cout<<"**p"<<**&p<<endl;
  
     return 0; 
}