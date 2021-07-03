#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n)
{
    int minindex, temp;
    for (int i=0; i<n-1; i++)
    {
        minindex = i;
        for (int j=i+1; j<n; j++)
        {
            if (arr[j] < arr[minindex])
                minindex = j;
        }
        if (i != minindex)
        {
            temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;
        }
    }
}

int main()
{
    int arr[] = {3, 6, 1, 8, 4, 5};
    int n = 6, i;
    cout << "Unsorted elements: ";
    for (i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    SelectionSort(arr, n);
    cout << "Sorted elements: ";
    for (i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
