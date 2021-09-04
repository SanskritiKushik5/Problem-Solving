// Binary Search on Reverse Sorted Array
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[7] = {20, 15, 12, 11, 9, 3, 2};
    int n = 7;
    int element = 2;
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(element==arr[mid]){
            cout << mid;
            break;
        }
        else if(element<arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }

    return 0;
}
