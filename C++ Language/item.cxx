
#include<iostream>
//#include<bits/c++.h>
using namespace std;

class   item
{
   private:
   int n;//number
   float c;//cost
   
   
   
   public:
 void get(int a,float b);
 //function declaration  in the class
   void put()//function definition inside the class
   {
         cout<<"\nNUMBER IS \t:"<<n;
        cout<<"\nCOST IS \t:"<<c;
   
   }
 
   
   
   
   protected:
   
   
   
   
   
};//function definition outside the class
void item::get(int a,float b)
{
   n=a;
   c=b;
}
int main()
{  
    item x,y;
    x.get(100,50.50);
    y.get(200,100.100);
    x.put();
    y.put();
 
  
     return 0; 
}