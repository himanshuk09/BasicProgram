#include<stdio.h>
#include<string.h>
int main()
{ 
     char s1[50],s2[50];
   printf("Enter Two String ");
   gets(s1);
   strcpy(s2,s1);
   printf("String.  2=.  %s",s2);
   strcpy(s1,"Hello");
   printf("\n String. 1=  %s",s1);
   return 0;
  
}