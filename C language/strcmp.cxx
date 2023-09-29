#include<string.h>
#include<stdio.h>
int main()
{ 
     char s1[50],s2[50];
   printf("Enter 1st String ");
   gets(s1);
   printf("Enter 2nd string ");
   gets(s2);
  if (strcmp (s1,s2)==0)
 {
   printf("\n String are same ");
 } 
  else
{
  printf("\n String ain't same");
}
  return 0;
  
}