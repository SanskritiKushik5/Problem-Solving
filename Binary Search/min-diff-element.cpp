// Minimum Difference Element in a Sorted Array
  
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 10};
    int n = 8;
    int element = 9;
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(element==arr[mid]){
            cout << arr[mid];
            return 0;
        }
        else if(element<arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    cout << min(abs(arr[start]-element), abs(arr[end]-element));
    return 0;
}
