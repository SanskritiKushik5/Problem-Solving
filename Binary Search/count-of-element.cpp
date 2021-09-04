// Count of an Element in a Sorted Array
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int first_occurrence(int arr[], int n, int element){
    int start = 0;
    int end = n-1;
    int res = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(element==arr[mid]){
            res = mid;
            end = mid - 1;
        }
        else if(element<arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return res;
}
int last_occurrence(int arr[], int n, int element){
    int start = 0;
    int end = n-1;
    int res = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(element==arr[mid]){
            res = mid;
            start = mid + 1;
        }
        else if(element<arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return res;
}
int main() {
    int arr[7] = {2, 4, 10, 10, 10, 18, 20};
    int n = 7;
    int element = 10;
    int a = first_occurrence(arr, n, element);
    int b = last_occurrence(arr, n, element);
    cout << b-a+1;
    return 0;
}
