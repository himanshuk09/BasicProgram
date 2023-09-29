//move all 'x' at the end
#include <iostream>
//#include<bits/c++.h>
using namespace std;
string moveallx(string s)
{
    if (s.length() == 0)
    {
        return " .";//base case
    }
    char ch = s[0];
    string ans = moveallx(s.substr(1));
    if (ch == 'x')
    {
        return ans + ch;
    }

    return ch + ans;
}
int main()
{
    string s = "axxbxxcxxdxx";
    cout << moveallx(s);

    return 0;
}