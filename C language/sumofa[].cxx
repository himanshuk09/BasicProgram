#include<stdio.h>
int main()
{ 
   int a[ 1000],i,n,sum=0;
   printf("Enter the range of array ");
   scanf("%d",&n);
   printf("Enter the elements of an array \t");
   for (i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   }
   
   
printf("\n The sum of an array are\t: ");
for(i=0;i<n;i++)
{
	sum=sum+a[i];
}
printf("%d",sum);
return 0;
}