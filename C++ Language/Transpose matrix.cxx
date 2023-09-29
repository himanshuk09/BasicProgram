
#include<iostream>
//#include<bits/c++.h>
using namespace std;

int main()
{   
     int n;
     cout<<"Enter the range";
     cin>>n;
     int a[n][n];
      cout<<"Enter matrix"<<endl;
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
       
       
       for(int i=0;i<n;i++){
          for( int j=i;j<n;j++)
          {
             int temp;
             temp=a[i][j];
             a[i][j]=a[j][i];
             a[j][i]=temp;
          }
       }
       
           
       
       cout<<"ENTER  TRANSPOSE MATRIX ARE \n";
            for (int i=0;i<n;i++)
       {
          for(int j=0;j<n;j++)
    {
       cout<<a[i][j]<<"  ";
    } cout<<"\n";
       }     
       
       
  
     return 0; 
}