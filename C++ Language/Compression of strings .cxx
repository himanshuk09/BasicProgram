
#include <iostream>
//#include<bits/c++.h>
using namespace std;

int main()
{
    string s="gguunnckkkkkmkkm";

    int n = s.size();

    // delete repeating character

    char ans[100];

    ans[0] = s[0] ;

        int cnt = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
           ans [cnt] =s[i];
           cnt++;
        }
    } 
        cout << ans << endl;

        return 0;
    }