#include<stdio.h>
int main()
{ 
   int t1=0,t2=1, nextterm=0,n;
   printf("Enter a positive number");
   scanf("%d",&n);
   printf("Fibonacci series is\n%d\n\n%d\n",t1,t2);
   nextterm=t1+t2;
   while(nextterm<=n)
   {
       printf("\n%d\n",nextterm);
       t1=t2;
       t2=nextterm;
       nextterm=t1+t2;
   }
   return 0;
      
}