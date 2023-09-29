
#include <iostream>
//#include<bits/c++.h>
using namespace std;

int main()
{
    int a = 10;
    int *pet;
    pet = &a;
    cout << "a"
         << " " << a << endl;
    cout << "&a"
         << "   " << &a << endl;
    cout << "pet"
         << "  " << pet << endl;
    cout << "*pet"
         << "    " << *pet << endl;

    *pet = 150;

    cout << a << endl;
    cout << endl
         << endl
         << endl
         << endl
         << endl;
    int arr[] = {10, 20, 30, 40, 50};
    cout << *arr << endl;
    int *prt = arr;
    for (int i; i <= 4; i++)
    {
        cout << (arr + i) << endl;
        //   prt++;
    }
    return 0;
}