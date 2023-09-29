
#include<iostream>
//#include<bits/c++.h>
using namespace std;

int  main()
{   
     int n,c;
     cin>>n;
     
     while(n!=0)
      {
         n=n/10;
         c++;
      }
     cout<<c;
     
     return 0;
}