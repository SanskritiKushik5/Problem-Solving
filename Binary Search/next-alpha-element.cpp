// Next Alphabetical Element --------- almost same as ceil
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    char arr[] = {'a', 'c', 'd', 'g', 'y'};
    int n = sizeof(arr)/sizeof(arr[0]);
    char element = 'd';
    int start = 0;
    int end = n-1;
    vector<char> res;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(element<arr[mid]){
            res.push_back(arr[mid]);
            end = mid - 1;
        }else
            start = mid + 1;
    }
    cout << *min_element(res.begin(), res.end());
    return 0;
}
