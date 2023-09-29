//remove duplicates
#include<iostream>
//#include<bits/c++.h>
using namespace std;
string duplicate(string s)
{
    if (s.length() == 0)
    {
        return "  ";
    }
    char ch = s[0];
    string ans = duplicate(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }

    return ch + ans;
}
int main()
{  
     string s="aabbbcccddeeefff";
  cout<<duplicate(s);
     return 0; 
}