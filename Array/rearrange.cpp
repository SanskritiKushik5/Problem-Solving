// Rearrange the array in alternating positive and negative items with O(1) extra space

#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n)
{
    sort(arr, arr + n);
    int i=1;
    int j=1;
    int temp;
    while (j < n)
    {
        if (arr[j] > 0)
            break;
        j += 1;
    }
    while ((arr[i] < 0) and (j < n))
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j++;
        i+=2;
    }
        
}
int main()
{
    int arr[] = { -5, -2, 5, 2, 4, 7, 1, 8, 0, -8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
