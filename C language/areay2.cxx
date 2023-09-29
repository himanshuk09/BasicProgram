#include<stdio.h>
int main()
{ 
   int a[1000][1000],i,j,r,c;
   printf("Enter the size of matrix ");
   scanf("%d %d",&r,&c);
   printf("Enter the elements of an array");
   for (i=0;i<r;i++)
   { 
        for(j=0;j<c;j++)
        {
          scanf("%d",&a[i][j]);
        }
   }
   //print the values of an array
printf("\n The Elements of an array are\t: ");
for(i=0;i<r;i++)
{ 
 for(j=0;j<c;j++)
        {
            printf("\n %d",a[i][j]);
        }
}
return 0;
}