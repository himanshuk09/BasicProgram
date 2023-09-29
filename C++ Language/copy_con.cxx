
#include<iostream>
//#include<bits/c++.h>
using namespace std;

class exm
{
   private:
   
   int a,b;
   
   
   public:
         exm(int x,int y)
         {
            a=x;
            b=y;
            cout<<"\n I AM A PARAMETERIZED CONSTRUCTOR\n ";
         }
         exm(const exm &obj)
         {
            //a sign values in constructor
           a=obj.a;
           b=obj.b;
           cout<<"I AM A COPY CONSTRUCTOR\n";
         }
         void display()
         {
            cout<<"\nVALUES:\t"<<a<<"\t"<<b;
         }
   
   
   
   protected:
   
   
   
   
   
};
int main()
{  
     exm object1(10,20);
     exm object2(object1);
     exm object3=object1;
     object1.display();
     object2.display();
     object3.display();
     return 0; 
}