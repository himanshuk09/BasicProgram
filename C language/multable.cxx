#include<stdio.h>
int main()
{ 
   int product,n,count=1;
   printf("Enter the value ");
   scanf("%d",&n);
   printf("Multiplication table of %d is ",n);
   while(count<=10)
   {
       product=n*count;
       printf("\n%d * %d = %d \n"
              "",n,count, product);
       count++;
   }
   printf("     💯        ");
   return 0;    
       
   
       
}