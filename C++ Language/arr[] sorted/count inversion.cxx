// C++ program for Merge Sort
#include <iostream>

using namespace std;

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]

int  merge(int arr[], int l, int m, int r)
{
    long long inv = 0;
    int n1 = m - l + 1;

    int n2 = r - m;

    // Create temp arrays

    int a[n1], b[n2];

    // Copy data to temp arrays L[] and R[]

    for (int i = 0; i < n1; i++)

        a[i] = arr[l + i];

    for (int j = 0; j < n2; j++)

        b[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]

    // Initial index of first subarray

    int i = 0;

    // Initial index of second subarray

    int j = 0;

    // Initial index of merged subarray

    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];

            i++;
        }

        else
        {
            arr[k] = b[j];
            inv += n1 - i;

            j++;
        }

        k++;
    }

    // Copy the remaining elements of

    // L[], if there are any

    while (i < n1)
    {
        arr[k] = a[i];

        i++;

        k++;
    }

    // Copy the remaining elements of

    // R[], if there are any

    while (j < n2)
    {
        arr[k] = b[j];

        j++;

        k++;
    }
    return inv;
}

// l is for left index and r is
// right index of the sub-array
// of arr to be sorted */
int mergeSort(int arr[], int l, int r)
{
    // if(l>=r){

    //       return;//returns recursively

    //   }
    long long inv=0;
    if (l < r)
    {
        //   int m =l+(r-l)/2;
        int m = (l + r) / 2;
        inv += mergeSort(arr, l, m);

        inv += mergeSort(arr, m + 1, r);

        inv += merge(arr, l, m, r);
    }
    return inv;
}

// UTILITY FUNCTIONS
// Function to print an array

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)

        cout << arr[i] << " ";
}

// Driver code

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";

    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";

    printArray(arr, arr_size);

    return 0;
}

// This code is contributed by Mayank Tyagi
