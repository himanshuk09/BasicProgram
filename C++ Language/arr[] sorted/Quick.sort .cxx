
/* C++ implementation of QuickSort */
//#include <bits/stdc++.h>
#include<iostream>
using namespace std; 
 
// A utility function to swap two elements 

void swap(int* a, int* b) 
{ 

    int t = *a; 

    *a = *b; 

    *b = t; 
} 
 
/* This function takes last element as pivot, places 
the pivot element at its correct position in sorted 
array, and places all smaller (smaller than pivot) 
to left of pivot and all greater elements to right 
of pivot */

int partition (int arr[], int l, int r) 
{ 

    int pivot = arr[r]; // pivot 

    int i = (l - 1); // Index of smaller element and indicates the right position of pivot found so far
 

    for (int j = l; j <= r- 1; j++) 

    { 

        // If current element is smaller than the pivot 

        if (arr[j] < pivot) 

        { 

            i++; // increment index of smaller element 

            swap(&arr[i], &arr[j]); 

        } 

    } 

    swap(&arr[i + 1], &arr[r]); 

    return (i + 1); 
} 
 
/* The main function that implements QuickSort 
arr[] --> Array to be sorted, 
low --> Starting index, 
high --> Ending index */

void quickSort(int arr[], int l, int r) 
{ 

    if (l< r) 

    { 

        /* pi is partitioning index, arr[p] is now 

        at right place */

        int pi = partition(arr, l, r); 
 

        // Separately sort elements before 

        // partition and after partition 

        quickSort(arr, l, pi - 1); 

        quickSort(arr, pi + 1, r); 

    } 
} 
 
/* Function to print an array */

void printArray(int arr[], int size) 
{ 

    int i; 

    for (i = 0; i < size; i++) 

        cout << arr[i] << " "; 

    cout << endl; 
} 
 
// Driver Code

int main() 
{ 

    int arr[] = {10, 7, 8, 9, 1, 5}; 

    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Given array is \n";

    printArray(arr,n);

    quickSort(arr, 0, n - 1); 

    cout << "Sorted array: \n"; 

    printArray(arr, n); 

    return 0; 
} 
 