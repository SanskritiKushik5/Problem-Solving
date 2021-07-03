#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n)
{
    int i, item;
    for(int j=1; j<n; j++)
    {
        i = j-1;
        item = arr[j];
        while (item < arr[i] && i != -1)
        {
            arr[i+1] = arr[i];
            i = i - 1;
        }
        arr[i+1] = item;
    }
}

int main()
{
    int arr[] = {10, 5, 15, 7, 12};
    int n = 5, i;
    cout << "Unsorted elements: ";
    for (i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    InsertionSort(arr, n);
    cout << "Sorted elements: ";
    for (i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
