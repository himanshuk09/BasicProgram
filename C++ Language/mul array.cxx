
#include <iostream>
//#include<bits/c++.h>
using namespace std;

int main()
{
    int n1, n3, n2;
    cout << "Enter the ranges of matrix";
    cin >> n1 >> n2 >> n3;
    int m1[n1][n2];
    int m2[n2][n3];

    cout << "Enter 1st martix"<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> m1[i][j];
        }
    }
    cout << "Enter 2st martix"<<endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> m2[i][j];
        }
    }
        cout<<"Entered martix"<<endl;
             for (int i=0;i<n1;i++)
       {
          for(int j=0;j<n2;j++)
    {
       cout<<m1[i][j]<<"  ";
    } cout<<endl;
       }
  
        cout<<"Entered martix"<<endl;
             for (int i=0;i<n2;i++)
       {
          for(int j=0;j<n3;j++)
    {
       cout<<m2[i][j]<<"  ";
    }cout<<endl;
       }
      
    

    int ans[n1][n3];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
                ans[i][j] += m1[i][k] * m2[k][j];
        }
    }

    cout << "martix"<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}