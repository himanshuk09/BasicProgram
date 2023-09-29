
#include<iostream>
//#include<bits/c++.h>
using namespace std;

class large
{
   private:
        int a,c,b,lar;
        
   
   
   
   public:
inline   void get();
inline   void find();
inline    void put();
   
   
   
   
   protected:
   
   
   
   
   
};
inline void large::get()
{
   cout<<"ENTER ANY TWO NUMBERS\t: \t";
   cin>>a>>b>>c;
}
inline void large::find()
{
   if((a>b)&&(a>c))
   {
      lar=a;
   }
   else
 {
   if((b>c))
   {
      lar=b;
   }
   else
  { 
    lar=c;
  }
 }
}
 
inline void large::put()
 {
    cout<<"LARGEST NUMBER OF THREE NUMBER IS \t"<<lar;
 }
 
int main()
{  
     large L;
     L.get();
     L.find();
     L.put();
  
     return 0; 
}