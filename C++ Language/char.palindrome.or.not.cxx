
#include<iostream>
//#include<bits/c++.h>
using namespace std;

int main()
{  int n ;
cin>>n;
     char c[n];
     cin>>c;
     bool check=true;
     for(int i=0;i<n; i++)
     {
        if(c[i]==c[n-1-i])
        check=false;
     }
     if(check)
     cout<<"is Palindrome"<<endl;
     else
     cout<<"is not Palindrome"<<endl;
  
     return 0; 
}