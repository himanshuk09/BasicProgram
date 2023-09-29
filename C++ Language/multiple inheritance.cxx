
#include<iostream>
//#include<bits/c++.h>
using namespace std;
class A
{
   public:
   A()
   {
      cout<<"constructor A\n";
   }
};
class B
{
  public :
  B()
  {
     cout<<"constructor B\n";
  }
};
class C: public  A,public B
{ 
   public :
     
     C()
     {
        cout<<"constructor C\n";
     }
};

int main()
{  
   C obj;  
  
  return 0; 
}