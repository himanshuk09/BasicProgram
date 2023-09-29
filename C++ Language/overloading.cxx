
#include<iostream>
//#include<bits/c++.h>
using namespace std;

class ABC
{
   private:
   
   int x,y;
   
   
   public:
  ABC()//default constructor
  {
      x=y=0;
  }
  ABC( int a)//parameterized constructor
{
   x=y=a;
}
ABC(int a,int b )//pc
  {
     x=a;
     y=b;
  }
  void display ()
  {
   cout<<"x="<<x<<"and"<<"y="<<y<<endl;
   } 
   
   
   protected:
   
   
   
   
   
};
int main()
{  
     ABC CC1;
     ABC CC2(10);
     ABC CC3(10,20);
     CC1.display();
     CC2.display();
     CC3.display();
     
  
     return 0; 
}