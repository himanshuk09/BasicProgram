// C++ Program to print a matrix spirally
 
//#include <bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;
#define R 3
#define C 6
 

void spiralPrint(int m, int n, int a[R][C])
{

    int i, k = 0, l = 0;
 

    /* k - starting row index

        m - ending row index

        l - starting column index

        n - ending column index

        i - iterator

    */
 

    while (k < m && l < n) {

        /* Print the first row from

               the remaining rows */

        for (i = l; i < n; ++i) {

            cout << a[k][i] << " ";

        }

        k++;
 

        /*  the last column

         from the remaining columns */

        for (i = k; i < m; ++i) {

            cout << a[i][n - 1] << " ";

        }

        n--;
 

        /* Print the last row from

                the remaining rows */

        if (k < m) {

            for (i = n - 1; i >= l; --i) {

                cout << a[m - 1][i] << " ";

            }

            m--;

        }
 

        /* Print the first column from

                   the remaining columns */

        if (l < n) {

            for (i = m - 1; i >= k; --i) {

                cout << a[i][l] << " ";

            }

            l++;

        }
cout<<endl;
    }
}
 
/* Driver Code */

int main()
{

    int a[R][C] = { { 1, 2, 3, 4, 5, 6 },

                    { 7, 8, 9, 10, 11, 12 },

                    { 13, 14, 15, 16, 17, 18 } };

       for (int i=0;i<R;i++)
       {
          for(int j=0;j<C;j++)
    {
       cout<<a[i][j]<<" ";
    }cout<<endl;
       }

      // Function Call

    spiralPrint(R, C, a);

    return 0;
}
 
// This is code is contributed by rathbhupendra
