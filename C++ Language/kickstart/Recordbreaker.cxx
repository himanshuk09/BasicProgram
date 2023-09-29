
#include <iostream>
//#include<bits/c++.h>
using namespace std;

void recordbreaker()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(n==1)
    {
       cout<<"1"<<endl;
       return;
    }
int ans=0;
int mx=-1;
for(int i=0;i<n;i++)
{ if(a[i]>mx && a[i]>a[i+1])
ans++;
mx=max(mx,a[i]);
}
cout<<ans<<endl;  
}
int main()
{
   recordbreaker();
   return 0;
}
//input
//8
//1 2 0 7 2 0 2 2
//output
//2

