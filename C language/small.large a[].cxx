#include<stdio.h>
int main()
{ 
   int a[1000],i,n,small,large;
   printf("Enter the range of array ");
   scanf("%d",&n);
   printf("Enter the elements of an array \t");
   for (i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   }
   
 small=large=a[0];
 //consider the first element as large and small
for(i=0;i<n;i++)
{
   if(a[i]<small)
   {
       small=a[i];
   }
   if(a[i]>large)
   {
      large=a[i];
   }
}
printf("\n smallest= %d \n largest = %d \n",small,large);
return 0;
}