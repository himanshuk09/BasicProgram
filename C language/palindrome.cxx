#include<stdio.h>
int main()
{ 
   int n,rev=0,rem,ori;
   printf("\n Enter an integer");
   scanf("%d",&n);
   ori=n;
   while(n!=0)
   {
       rem=n%10;
       rev=rev*10+rem;
       n=n/10;
   }
   if(ori==rev)
  {
    printf("%d is palindrome",ori);
  }
   else
  {
       printf("%d is not palindrome",ori);  
  }
  return 0;
}