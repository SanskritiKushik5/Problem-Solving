// Searching in a Nearly Sorted Array
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {5, 10, 30, 20, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int element = 20;
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(element==arr[mid]){
            cout << mid;
            break;
        }
        else if(mid>=start && arr[mid-1]==element){
            cout << mid-1;
            break;
        }
        else if(mid<=end && arr[mid+1]==element){
            cout << mid+1;
            break;
        }
        else if(element<arr[mid])
            end = mid - 2;
        else
            start = mid + 2;
    }

    return 0;
}
