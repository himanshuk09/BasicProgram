
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
     for(i=1;i<=5;i++)
     {
        for(j=1;j<=5;j++)
     {
          if (j<=5-i)
          {
              cout<<" ";
          }
          else
        {
           cout<<"*";
        }
     
     }
     cout<<endl;
     }
     return 0; 
}