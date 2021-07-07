int maximumSumSubarray(int k, vector<int> &arr , int n){
    // code here 
    int max_sum = 0;
    for (int i=0; i<k; i++)
        max_sum += arr[i];
    int curr_sum = max_sum;
    for (int i=k; i<n; i++)
    {
        curr_sum += arr[i] - arr[i-k];
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}
