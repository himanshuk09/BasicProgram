
#include <iostream>
//#include<bits/c++.h>
using namespace std;

int main()
{
    string s = "himanshu";
    string s1 = "KHADE";
    for (int i = 0; i < s.size(); i++)
    {
        s[i] -= 32;
    }
    cout << s << endl;
    for (int i=0;i<s1.size();i++)
    {  
         s1[i]+=32;
       
       }
     cout<<s1<<endl;
  ///////or


string str="HimAnsHu Khade";
sort(str.begin(),str.end());
cout<<"after sort "<<"  "<<str<<endl;


transform(str.begin(),str.end(),str.begin(),::toupper);
cout<<"upper case "<<"  "<<str<<endl;
transform(str.begin(),str.end(),str.begin(),::tolower);
cout<<"lower case "<<"  "<<str<<endl;
    return 0;
    
    
}