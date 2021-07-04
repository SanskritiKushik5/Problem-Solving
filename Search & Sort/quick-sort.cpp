#include <bits/stdc++.h>
using namespace std;
int Partition(int low, int high);
int arr[] = {65, 70, 75, 80, 85, 60, 55, 50, 45};
int n = 9;

void QuickSort(int low, int high)
{
    int loc;
    if(low<high)
    {
        loc = Partition(low, high);
        QuickSort(low, loc-1);
        QuickSort(loc+1, high);
    }
}

int Partition(int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

int main()
{
    cout << "Unsorted elements: ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    QuickSort(0, n-1);
    cout << "Sorted elements: ";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
