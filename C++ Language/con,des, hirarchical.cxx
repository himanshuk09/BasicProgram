
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
   ~A()
   {
      cout<<"destructor A\n";
   }
   
};
class B:public A
{
  public :
  B()
  {
     cout<<"constructor B\n";
  }
  ~B()
  {
     cout<<"destructor B\n";
  }
};
class C: public  A
{ 
   public :
     
     C()
     {
        cout<<"constructor C\n";
     }
     ~C()
     {
        cout<<"destructor C\n";
     }
     
};

int main()
{  
   B obj1;
   C obj;  
  
  return 0; 
}