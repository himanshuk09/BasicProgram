
#include<iostream>
//#include<bits/c++.h>
using namespace std;
bool check_prime(int n){
   for(int i=2;i*i<=n;i++)
   {
      if(n%1==0)
      return false;
   }
   return true;
}
void get_prime_till_n(int  n)
{
   for(int i=2;i<=n;i++)
   {
      if(check_prime(i)){
         cout<<i<<" ";
      }}}

int main()
{  
     int n;
     cin>>n;
     get_prime_till_n(n);
  
     return 0; 
}