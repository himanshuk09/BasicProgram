
#include<iostream>
//#include<bits/c++.h>
using namespace std;

class  gb
{
   private:
   static int count;
   
   
   
   public:
   void display()
   {
      count++;
      cout<<"COUNT\t:"<<count<<endl;
   }
   
   protected:
   
   
   
   
   
};
int gb::count;//static datamember define outside the class
int main()
{  
     gb a,b,c;
     a.display();
     b.display();
     c.display();
  
     return 0; 
}