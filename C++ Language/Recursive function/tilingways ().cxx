//Tilingways Problem 
//same code as Fibonacci sequence using recursion
#include <iostream>
//#include<bits/c++.h>
using namespace std;
int tilingways(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return (tilingways(n - 1) + tilingways(n - 2));
}
int main()
{
    int n;
    cin >> n;
    cout << tilingways(n);

    return 0;
}