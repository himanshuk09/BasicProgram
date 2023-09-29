
#include <iostream>
using namespace std;

int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // show error message if c is not an alphabet
    if (!isalpha(c))
    {
        printf("Error! Non-alphabetic character.");
    }
    else if (isLowercaseVowel || isUppercaseVowel)
    {
        printf("%c is a .", c);
    }

else
{
    printf("%c is a .", c);
}

return 0;
}