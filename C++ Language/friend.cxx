
#include<iostream>
//#include<bits/c++.h>
using namespace std;

class sample
{
   private:
       int a,b;
       
   
   
   
   public:
   
   void setvalue()
   {
      a=25;
      b=40;
   }
   friend float mean(sample s );
   
   
   
   protected:
   
   
   
   
   
};
float mean(sample s)//friend function defined outside the class
{
   return float(s.a+s.b)/2.0;
}
int main()
{  
    sample x;
    x.setvalue();
    cout<<"Mean value >>"<<mean(x)<<endl;
   
     return 0; 
}