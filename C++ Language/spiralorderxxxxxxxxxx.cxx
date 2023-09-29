
#include <iostream>
//#include<bits/c++.h>
using namespace std;
//int  sp(int n, int m, int arr[][])

void spiralPrint(int n, int m, int arr[n][m])
{
    int rowstart = 0, rowend = n - 1, colstart = 0, colend = m - 1;
    while (rowstart <= rowend && colstart <= colend)
    {
        for (int col = colstart; col <= colend; col++)
        
            cout << arr[rowstart][col] << endl;
        
        rowstart++;
        for (int row = rowstart; row <= rowend; row++)
        
            cout << arr[row][colend] << endl;
        
        colend--;
        for (int col = colend; col >= colstart; col--)
        
            cout << arr[rowend][col] << endl;
        
        rowend--;
        for (int row = rowend; row = rowstart; row--)
        
            cout << arr[row][colend] << endl;
        
        colstart++;
        
    }
//    return 0;
}
    int main()
    {
        int n, m;
        cin >> n>>m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

        // Function Call

          spiralPrint(n, m, arr);
        return 0;
    }