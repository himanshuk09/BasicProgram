#include<stdio.h>
int main()
{ 
   int c,p,b,total;
   float per;
   printf("Enter the marks of "
          "chemistry    ");
   scanf("%d",&c);
   printf(""
          "physics    ");
   scanf("%d",&p);
   printf(""
         "biology    ");
   scanf("%d",&b);
   total=c+p+b;
   per=(total/3);
   printf("Percentage of student is     %.2f    ",per);
   printf("Grades  :  ");
   if (per>=75)
   {
       printf(""
              "Distinction");
   }  
   else if(per<75 && per>=60)
   {
          printf(
                 "first class");
   }
   else if(per<60 && per>=50)
   { 
        printf(""
               "second class");    
   }
   else if(per<50 && per>=40)
   {
        printf(""
                "Third class");
   }    
   else
   {
       printf(""
              "Fail");
   }
     return 0;                               
              
}