
#include<iostream>
//#include<bits/c++.h>
using namespace std;

class point
{
   private:
   
   int x,y;
   
   
   public:
        point(int a,int b)
        {
           x=a;
           y=b;
           
        }
   void disp()
   {
   cout<<"x: "<<x<<endl<<"y:"<<y<<"\tOR"<<endl;
   cout<<"("<<x<<","<<y<<")"<<endl;
   
   }
   protected:
   
   
   
   
   
};
int main()
{  
     point p1(1,1);//implicitly calling
     point p2=point(5,10);//explicitly calling
    cout<<"point p1= ";
    p1.disp();
    cout<<"point p1= ";
    p2.disp();
     return 0; 
}