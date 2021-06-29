// find Largest sum contiguous Subarray [V. IMP]

int maxSubarraySum(int arr[], int n){
        int maxi = INT_MIN;
        int max = 0;
        for(int i=0; i<n; i++)
        {
            max = max+arr[i];
            if(maxi < max)
                maxi = max;
            if(max < 0)
                max = 0;
        }
        return maxi;
    }
