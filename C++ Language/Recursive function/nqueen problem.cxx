
#include <iostream>

//#include<bits/c++.h>
using namespace std;
bool issafe(int **arr, int x, int y, int n)
{
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false; /* Check this row on left side */
        }
    }
    int row = x;
    int col = y;

    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false; /* Check upper diagonal on left side */
        }
        row--;
        col--;
    }
    row = x;
    col = y;

    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
            /* Check lower diagonal on left side */
        }
        row--;
        col++;
    }
    return true;
}

/* A recursive utility function to solve N 

   Queen problem */
bool nqueen(int **arr, int x, int n)
{
    if (x >= n)
    {
        return true; //base case  /* base case: If all queens are placed     then return true */
    }
    for (int col = 0; col < n; col++)
    {
        if (issafe(arr, x, col, n))
        {
            arr[x][col] = 1;
            if (nqueen(arr, x + 1, n))
            {
                return true;
            }
            arr[x][col] = 0; //backtracking
        }
    }
    return false;
}
/* This function solves the N Queen problem using 

   Backtracking. It mainly uses solveNQUtil() to  

   solve the problem. It returns false if queens 

   cannot be placed, otherwise, return true and 

   prints placement of queens in the form of 1s. 

   Please note that there may be more than one 

   solutions, this function prints one  of the 

   feasible solutions.*/

int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    if (nqueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << "  ";
            }
            cout << endl;
        }
    }
    return 0;
}