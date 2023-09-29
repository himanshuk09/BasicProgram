
#include<iostream>
//#include<bits/c++.h>
using namespace std;

class Digit
{
   private:
   
   int n,rem=0,sum=0;
   
   
   public:
   inline void find(int n)
   {
      while(n!=0)
      {
         rem=n%10;
         sum=sum+rem;
         n/=10;
      }
   }
   void print();
   
   
   
   protected:
   
   
   
   
   
};
inline void Digit::print()
{
   cout<<"Sum of Digit id \t"<<sum;
}
int main()
{  
    Digit D;
    int n;
    cout<<"ENTER ANY NUMBER:  ";
    cin>>n;
    D.find(n);
    D.print();
    
     
  
     return 0; 
}