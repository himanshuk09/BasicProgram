//Fibonacci using recursion
#include<iostream>
//#include<bits/c++.h>
using namespace std;
int fibo(int n)
{
   if( n==0|| n== 1)
   {
      return n;//base case 
   }
   return fibo(n-1)+fibo(n-2);
}

int main()
{  
     int n;
     cin>>n;
     cout<<fibo(n);
     
  
     return 0; 
}