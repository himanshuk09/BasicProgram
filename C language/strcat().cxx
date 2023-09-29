#include<stdio.h>
#include<string.h>
int main()
{ 
    char s1[50],s2[50];
   printf("Enter Two String ");
   gets(s1);
   gets(s2);
   strcat(s1,s2);
   printf("The string is ");
   puts(s1);
  // printf("😉");
   return 0;
}