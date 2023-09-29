//to calculate n^p
#include <iostream>
//#include<bits/c++.h>
using namespace std;
int powerofn(int n, int p)
{
    if (p == 0)
    {
        return 1;//base case 
    }
    int prevpower = powerofn(n, p - 1);

    return n * prevpower;
}
int main()
{
    int n, p;
    cin >> n >> p;
    cout << powerofn(n,p);

    return 0;
}