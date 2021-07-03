#include<bits/stdc++.h>
using namespace std;
void LinearSearch(int arr[], int n, int x)
{
    int flag = 0;
    int y = 0;
    int i;
    for (i=0; i<n; i++)
    {
        if(arr[i] == x)
        {
            flag = 1;
            y = i+1;
            break;
        }
    }
    if (flag == 1)
        cout << "Found! at " << y;
    else
        cout << "Not found :(";
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8};
    int x;
    cin >> x;
    LinearSearch(arr, 6, x);
    return 0;
}
