
#include<iostream>
//#include<bits/c++.h>
using namespace std;

int main()
{   
     int n;
     cout<<"Enter the range";
     cin>>n;
     int a[n][n];
      
       for (int i=0;i<n;i++)
       {
          for(int j=0;j<n;j++)
    {
       cin>>a[i][j];
    }
       }
       cout<<"ENTER MATRIX ARE \n";
            for (int i=0;i<n;i++)
       {
          for(int j=0;j<n;j++)
    {
       cout<<a[i][j]<<"  ";
    } cout<<"\n";
       }
       
       
       
       
       
  
     return 0; 
}