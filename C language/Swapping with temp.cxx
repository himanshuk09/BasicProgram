#include<stdio.h>
int main()
{ 
   int A,B,temp;
   printf("Enter 1st value");
   scanf("%d",&A);
   printf("Enter 2nd value");
   scanf("%d",&B);
   printf("\n Before swapping\n A=%d and B=%d ",A,B);
   temp=A;
   A=B;
   B=temp;
   printf("\nAfter swapping\n A=%d and B=%d ",A,B);
   return 0;
}