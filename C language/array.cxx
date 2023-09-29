#include<stdio.h>
int main()
{ 
   int a[1000],i,n;
   printf("Enter the range of array ");
   scanf("%d",&n);
   printf("Enter the elements of an array");
   for (i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   }
   //print the values of an array
printf("\n The Elements of an array are\t: ");
for(i=0;i<n;i++)
{
	printf("\n %d",a[i]);
}
return 0;
}