//selection sort
#include <iostream>
//#include<bits/c++.h>
using namespace std;
void selection(int arr[], int n)

{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + i; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Enter size of array";
    cin >> n;
    int arr[n];
    cout << "Enter array elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selection(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}