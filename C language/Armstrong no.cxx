#include<stdio.h>
int main()
{ 
   int ori,result,num,rem;
   result=0;
   printf("Enter A three  digit integer\t");
   scanf("%d",&num);
   ori=num;
      while(ori!=0)
   {
   	rem=ori%10;
   	result=result+(rem*rem*rem);
   	ori=ori/10;
   }
   if (result==num)
   {
   	printf("%d is an Armstrong Number",num);
   }
    else
  {
  	  printf("%d isnot an Armstrong Number",num);
  }
  return 0;
}