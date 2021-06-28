// Move all the negative elements to one side of the array 

#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;
void sort(int arr[], int n)
{
    // coode here 
    int lo = 0; 
    int hi = n-1;
    while(lo<=hi)
    {
        if (arr[lo] < 0)
            lo++;
        else if (arr[hi] >= 0)
            hi--;
        else {
            int temp = arr[lo];
            arr[lo] = arr[hi];
            arr[hi] = temp;
            lo++;
            hi--;
        }
        
    }
    
}
    
int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = 9;
    sort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
