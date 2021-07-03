#include <bits/stdc++.h>
using namespace std;

void BinarySearch(int arr[], int n, int x)
{
    int l = 0, h = n-1, m;
    while(l<=h)
    {
        m = (l + h)/2;
        if (x == arr[m]){
            cout << "Found at " << m+1;
            exit(0);
        }else if (x < arr[m]){
            h = m - 1;
        }else{
            l = m + 1;
        }
    }
    cout << "Not Found :(";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8};
    int x;
    cin >> x;
    BinarySearch(arr, 6, x);
    return 0;
}
