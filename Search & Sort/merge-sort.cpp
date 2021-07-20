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
//////// Method 2
#include <iostream>
using namespace std;
void Merge(int arr[], int l, int mid, int r)
{
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];
    for(int i=0; i<n1; i++){
        a[i] = arr[l+i];
    }
    for(int i=0; i<n2; i++){
        b[i] = arr[mid+1+i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k] = a[i];
            k++;
            i++;
        }
        else{
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k] = b[i];
        k++;
        j++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        Merge(arr, l, mid, r);
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    mergeSort(arr, 0, 4);
    for(int i=0; i<5; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
