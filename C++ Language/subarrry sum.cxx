
#include<iostream>
//#include<climit>
//#include<bits/c++.h>
using namespace std;

int main()
{  
     int n;
     cout<<"Enter size of array    ";
     cin>>n;
    int arr[n];
    cout<<"Enter array elements";
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
   int sum;
   for(int i=0;i<n;i++)
   {
     sum=0;
     for(int j=i;j<n;j++)
     {
        sum=sum+arr[j];
        cout<<sum<<"  ";
     }
    } 
     return 0; 
}