
#include <iostream>
//#include<bits/c++.h>
using namespace std;

int main()
{
    char arr[] = "apple";
    int n;
    cin >> n;
    cin.ignore();
    // char arr[] = ;
    //   cin.getline(arr, n);
    cin.ignore();
    int i = 0;
    int currLen = 0;
    int maxLen = 0;
    int st = 0, maxst = 0;
    while (i < n)
    {
        if (arr[i] == "  " || arr[i] == "\0")
        {
            if (currLen > maxLen)
            {
                maxst = st;
                maxLen = currLen;
            }
            st = i + 1;
            currLen = 0;
        }
        else
            currLen++;
        if (arr[i] == 0)
            break;
        i++;
    }

    cout << arr << endl;
    cout << maxLen << endl;

    for (int i = 0; i < maxLen; i++)
    {
        cout << arr[maxst + i];
        cout << endl;
    }
}