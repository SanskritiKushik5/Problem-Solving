
#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{
    int temp, exch, last = n-1;
    for (int pass=0; pass<n-1; pass++)
    {
        exch = 0;
        for (int i=0; i<n-1; i++)
        {
            if (arr[i]>arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                exch += 1;
            }
        }
        if (exch == 0)
            break;
        else
            last -= 1;
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
    BubbleSort(arr, n);
    cout << "Sorted elements: ";
    for (i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
