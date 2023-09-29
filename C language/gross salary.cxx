
#include<iostream>
//#include<bits/c++.h>
using namespace std;

int main()
{  
     float b,g,hra,da;
     //b=basic salary
     //g=gross salary
     //br=
     cin>>b;
     if(b>5000)
     {
        hra=(b*10)/100;
        da=(b*20)/100;
        g=(b+hra+da);
     }
     cout<<g;
  
     return 0; 
}