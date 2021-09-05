// Number of Times a Sorted array is Rotated ------------ Not perfect code
// Need to find the index of minimum element
#include<bits/stdc++.h>
using namespace std;


int countRotations(int arr[],int N, int low, int high)
{
    while(low<=high){
    	// Find mid
    	int mid = low + (high - low)/2; /*(low + high)/2;*/
    
    	// Check if element (mid+1) is minimum element.
    	int next=(mid+1)%N;
    	int prev=(mid+N-1)%N;
    	
    	if(arr[mid]<=arr[next]&&arr[mid]<=arr[prev]){
    	    return mid;
    	}
        else if(arr[low]<=arr[mid]){
    	    low=mid-1;
    	}
    	else if(arr[mid]<=arr[high]){
    	    high=mid-1;
    	}
    	break;
    }
    return -1;
}

int count( int arr[], int N,int low,int high){
    if(N==0){
        return 0;
    }
    return countRotations(arr,N,low,high);
}
// Driver code
int main()
{
	int arr[] = {11, 12, 15, 18, 2, 5, 6, 8};
	int N = sizeof(arr)/sizeof(arr[0]);
	int low=0;
    int high=N-1;
    countRotations(arr,N,low,high);
    cout<<count(arr,N,low,high);
	return 0;
}
