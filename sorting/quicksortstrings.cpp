//https://www.geeksforgeeks.org/quick-sort/
#include <iostream>
#include <array>
#include <string>
using namespace std;
const int arraylength = 10;
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
int partition (array<string,arraylength>list, int low, int high)
{
    int pivot = list[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&list[i], &list[j]);
        }
    }
    swap(&list[i + 1], &list[high]);
    return (i + 1);
}
 
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
array<string,arraylength>  quickSort(array<string,arraylength>list, int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(list, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(list, low, pi - 1);
        quickSort(list, pi + 1, high);
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
    array<string, array_length> thelist {"abcdef","bcdefg","cdefgh","defghi","efghij",
									  "ghijkl","hijklm","ijklmn","jklmno","klmnop"};
	int n = thelist.size();
    quickSort(thelist, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
 
// This code is contributed by rathbhupendra
