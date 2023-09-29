#include<stdio.h>
int main()
{ 
   int A,B;
   printf("Enter 1st value    ");
   scanf("%d",&A);
   printf("Enter 2nd value    ");
   scanf("%d",&B);
   printf("\n Before swapping\n A=%d and B=%d ",A,B);
   A=A+B;
   B=A-B;
   A=A-B;
   printf("\nAfter swapping\n A=%d and B=%d ",A,B);
   return 0;
}