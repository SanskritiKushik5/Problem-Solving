// Find the maximum and minimum element in an array

#include <iostream>
using namespace std;
void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
void minmax(int arr[], int n){
    int min, max;
    min = arr[0];
    max = arr[n-1];
    for (int i=1; i<n; i++){
        if (arr[i]<min)
            min = arr[i];
        else if (arr[i]>max)
            max = arr[i];
    }
    cout << min << endl;
    cout << max << endl;
}
int main()
{
    int arr[] = {11, 2, 13, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    cout << endl;
    minmax(arr, n);
    
     
    return 0;
}
