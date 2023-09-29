#include<stdio.h>
int main()
{ 
   int ori,a,result,num,rem,count;
   result=0;
   count=0;
   printf("Enter A three  digit integer\t");
   scanf("%d",&num);
   a=num;
   //condition for 3 and 4 digit   
   do
    {
        /* Increment digit count */
        count++;

        /* Remove last digit of 'num' */
        num /= 10;
    } while(num != 0);
   //.............
   //num=0
   ori=a;
/*   if(count=4)
{              while(ori!=0)
   {
   	rem=ori%10;
   	result=result+(rem*rem*rem*rem);
   	ori=ori/10;
   }
}
else //if (count=4)
{
           while(ori!=0)
   {
   	rem=ori%10;
   	result=result+(rem*rem*rem);
   	ori=ori/10;
   }
        
}*/


  while(ori!=0)
   {
   	rem=ori%10;
    switch(count)
    { 
             case 3:
                   	result=result+(rem*rem*rem);
    	case 4:
    	            	result=result+(rem*rem*rem*rem);
     /*  case 3:
                   	result=result+(rem*rem*rem);
       default: printf("default");*/
    }
    
		ori=ori/10;
   }









     printf("count =%d  and result=%d", count,result);  
     if (result==a)
   {
   	printf("\n%d is an Armstrong Number",a);
   }
    else
  {
  	  printf("\n%d isnot an Armstrong Number",a);
  }
  return 0;
}