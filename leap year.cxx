#include <iostream.h>

#include <conio.h>

void main()
{
    clrscr();
    int year;

    cout << "Enter the year: ";

    cin >> year;

    if ((year % 4 == 0) && (year % 100 != 0))
    {
        cout << " It is a leap year";
    }
    else if ((year % 100 == 0) && (year % 400 == 0))
    {
        cout << " It is a leap year" ;
    }
    else if (year % 400 == 0)
    {
        cout << "It is a leap year ";
    }
    else
    {
        cout << "It is not leap year";
                
    }

    getch();
}