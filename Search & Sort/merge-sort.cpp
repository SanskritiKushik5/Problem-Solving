#include <bits/stdc++.h>
using namespace std;
void Merge(int low, int mid, int high);
int arr[] = {5, 2, 4, 6, 1, 3, 2, 6};
int n = 8;

void MergeSort(int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high)/2;
        MergeSort(low, mid);
        MergeSort(mid+1, high);
        Merge(low, mid, high);
    }
}

void Merge(int low, int mid, int high)
{
    int h = low, i = low, j = mid+1, k;
    int temp[50];
    while((i <= mid) && (j <= high))
    {
        if (arr[i] < arr[j])
        {
            temp[h] = arr[i];
            i++;
        }
        else
        {
            temp[h] = arr[j];
            j++;
        }
        h++;
    }
    if (i > mid)
    {
        while (j <= high)
        {
            temp[h] = arr[j];
            j++;
        }
    }
    else
    {
        while (i <= mid)
        {
            temp[h] = arr[i];
            i++;
            h++;
        }
    }
    for (k = low; k < h; k++)
        arr[k] = temp[k];
}

int main()
{
    int i;
    cout << "Sorted elements: ";
    for (i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    MergeSort(0, n-1);
    cout << "Unsorted elements: ";
    for (i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
