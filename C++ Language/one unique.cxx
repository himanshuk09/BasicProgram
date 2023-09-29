
#include<iostream>
//#include<bits/c++.h>
using namespace std;
int unique(int arr[],int n)
{
   int xorsum=0;
   for(int i=0;i<n;i++)
   {
      xorsum =xorsum xor arr[i];
   }
   return xorsum;
}
int main()
{  
     int arr[]={1,2,3,4,1,2,3};
     cout<< unique(arr,7)<<endl;
  
     return 0; 
}
