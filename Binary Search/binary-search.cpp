#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int element = 4;
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(element==arr[mid]){
            cout << mid;
            break;
        }
        else if(element<arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }

    return 0;
}
