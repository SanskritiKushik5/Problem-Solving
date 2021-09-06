// Find an Element in a Rotated Sorted Array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int start, int end, int x){
    while(start<=end){
        int mid = start + (end-start)/2;
        if(x==arr[mid]){
            return mid;
        }
        else if(x<arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
int main(){
    int arr[] = {11, 12, 15, 18, 2, 5, 6, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int element = 15;
    int start = 0;
    int end = n-1;
    int min_ele = 0;
    while(start<=end){
    	int mid = start + (end - start)/2; 
    	int next=(mid+1)%n;
    	int prev=(mid+n-1)%n;
    	
    	if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
    	    min_ele = mid;
    	    break;
    	}
        else if(arr[start] <= arr[mid]){
    	    start=mid-1;
    	}
    	else if(arr[mid] <= arr[end]){
    	    end=mid-1;
    	}
    }
    int res = binary_search(arr, 0, min_ele-1, element);
    if(res == -1){
        res = binary_search(arr, min_ele, n-1, element);
    }
    cout << res;
    return 0;
}
