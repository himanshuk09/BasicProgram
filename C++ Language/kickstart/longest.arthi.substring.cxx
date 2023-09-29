
#include <iostream>
//#include<bits/c++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 2;
    int d = a[1] - a[0];
    int j = 2;
    int curr = 2;
    while (j < n)
    {
        if (a[j] - a[j - 1] == d)
        {
            curr++;
        }
        else
        {
            d = a[j] - a[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;

    return 0;
}
//input
//
//7
//10 7 4 6 8 10 11
//output
//4