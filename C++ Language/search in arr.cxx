
#include<iostream>
//#include<bits/c++.h>
using namespace std;
int search(int arr[],int n,int key)
{
   for(int i=0;i<n;i++)
   {
      if(arr[i]==key)
      {
         return i ;
      }
         
   }
   return -1;
}
int main()
{  
     int n;
     cout<<"Enter size of array";
     cin>>n;
    int arr[n];
    cout<<"Enter array elements";
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    int key;
    cout<<"Enter key elements";
    cin>>key;
   cout<<search(arr,n,key);
     return 0; 
}