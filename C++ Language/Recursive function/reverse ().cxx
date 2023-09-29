// Reverse the String
#include<iostream>
//#include<bits/c++.h>
using namespace std;
void reverse(string s)
{
   if (s.length()==0)
   {
      return ;//base case
   }
   string ros=s.substr(1);
   reverse(ros);
   cout<<s[0];
}

int main()
{  
     string sr="gnirts eht esrever era uoY";
     reverse(sr);

  
     return 0; 
}