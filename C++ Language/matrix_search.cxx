
#include <iostream>
//#include<bits/c++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the range";
    cin >> n >> m;
    int target;
    cout << "Enter search elements ";
    cin >> target;
    int a[n][m];
    cout<<"Enter the elements "<<endl;
    
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       cin>>a[i][j];
    }
    
    
    
    
    
        bool found = false;
        int r = 0, c =  n- 1;
        while (r< m && c >= 0)
        {
            if (a[r][c] == target)
            {
                found = true;
            }
            a[r][c] >target?c--:r++;   
         }
        if (found == true)
            cout << "Elements found";
        else
            cout << "Elements not found";

        return 0;
    }