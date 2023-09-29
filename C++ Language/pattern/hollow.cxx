
#include<iostream>
//#include<bits/c++.h>
using namespace std;
/*
class 
{
   private:
   
   
   
   
   public:
   
   
   
   
   protected:
   
   
   
   
   
};*/
int main()
{  
     int  i,j;
     for(i=1;i<=4;i++)
     {
        for(j=1;j<=5;j++)
     {
          if (i==1||i==4||j==1||j==5)
          {
              cout<<"*";
          }
          else
        {
           cout<<" ";
        }
     
     }
     cout<<endl;
     }
     return 0; 
}