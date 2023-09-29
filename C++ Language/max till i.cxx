
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
   int mx=0;
      for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx;
    }
       
      
 /* for(int i=0;i<n;i++){
       cout<<arr[i]<<"  ";
    }*/ 
     return 0; 
}