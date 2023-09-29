
/** 
 * C program to check even or odd using functions
 */

#include <iostream>
using namespace std;

/**
 * Function to check even or odd
 * Returns 1 is num is even otherwise 0
 */
int isEven(int num)
{    cout<<!(num & 1);
    return !(num & 1);
}


int main()
{
    int num;
    
    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);
    
    
    /* If isEven() function returns 0 then the number is even */
    if(isEven(num))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    
    return 0;
}