// First and Last occurrence of an Element
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void first_occurrence(int arr[], int n, int element){
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
    cout << "First occurrence: " << res << endl;;
}
void last_occurrence(int arr[], int n, int element){
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
    cout << "Last occurrence: " << res;
}
int main() {
    int arr[7] = {2, 4, 10, 10, 10, 18, 20};
    int n = 7;
    int element = 10;
    first_occurrence(arr, n, element);
    last_occurrence(arr, n, element);
    return 0;
}
