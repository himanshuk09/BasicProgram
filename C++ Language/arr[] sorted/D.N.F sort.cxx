
#include <iostream>
//#include<bits/c++.h>
using namespace std;
void swap(int arr[],int a,int  b)
{
   int temp=arr[a];
   arr[a]=arr[b];
   arr[b]=temp;
}

void DNF(int arr[], int n)
{
    int low = 0;
 int    mid = 0;
int    high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr,low,mid);
          
             low++; mid++;
            
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else //arr[mid]==2
        {
            swap(arr, mid, high);
            high--;
        }
    }
}

    int main()
    {
        int arr[] = {1, 0, 0, 0, 1, 1, 2, 2, 1, 0};
        int arr_size = sizeof(arr) / sizeof(arr[0]);
DNF(arr,arr_size);
        for (int i = 0; i < arr_size; i++)
        {
            cout << arr[i] << "  ";
        }

        return 0;
    }