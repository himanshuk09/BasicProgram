//bubble sort

#include<iostream>
//#include<bits/c++.h>
using namespace std;

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
    
    
    int counter=0;
    while(counter<n)
{
    for(int i=0;i<n-counter;i++)
    {
        if(arr[i]>arr[i+1]){
            int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        
     }
    }counter++;
}
  for(int i=0;i<n;i++){
       cout<<arr[i]<<"  ";
    }
     return 0; 
}