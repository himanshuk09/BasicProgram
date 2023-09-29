//knapsack
#include <iostream>
//#include<bits/c++.h>
using namespace std;
int knapsack(int value[], int wt[], int n, int w)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }

    if (wt[n - 1] > w)
    {
        return knapsack(value, wt, n - 1, w);
    }
    return max(knapsack(value, wt, n - 1, w - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, w));
}

int main()
{
    int value[] = {100, 50, 150};//value (price) of items
    int wt[] = {10, 20, 30};//weight of items
    int w = 50;//weight of bag
    int n = 3;//no of items
    cout << knapsack(value, wt, n, w);

    return 0;
}