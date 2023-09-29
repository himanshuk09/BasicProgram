
#include<iostream>
//#include<bits/c++.h>
using namespace std;

int main()
{  
     int n;
     cin>>n;
     int rem;
     while(n>0)
     {
       rem=n/10;
       cout<<rem;
       n=n/10;
     }
  
     return 0; 
}