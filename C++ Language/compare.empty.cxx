
#include<iostream>
#include<string>
//#include<bits/c++.h>
using namespace std;

int main()
{  
     string s1="abc";
     string s2="abc";
     string s3="shu";
     cout<<s1.compare(s2)<<endl;
 
  if(s1.compare(s2)==0)//!s1.compare(s2)
  cout<<"string is equal"<<endl;
  else 
  cout<<"string are not equal"<<endl;
  s1.clear();
  if(s1.empty())
  cout<<"string is empty";
  else 
  cout<<"string is not empty";
  return 0;
  
}