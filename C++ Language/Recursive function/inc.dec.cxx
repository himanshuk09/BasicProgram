//increasing ansd decreasing
#include<iostream>
//#include<bits/c++.h>
using namespace std;
void dec(int n)
{
   if(n==1){
      cout<<"1"<<endl;//base case 
      return ;
   }
   cout<<n<<endl;
   dec(n-1);
}
void inc(int n)
{
   if(n==1)
   { 
   cout<<"1"<<endl;//base case 
    return ;
   }
   inc(n-1);
   cout<<n<<endl;
}

int main()
{  
     int n;
     cin>>n;
     dec(n);
     cout<<endl<<endl;
     inc(n);  
  
     return 0; 
}