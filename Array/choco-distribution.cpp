// Chocolate distribution problem

long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(), a.end());
        int min = INT_MAX;
        int x;
        for (int i=0; i<=n-m; i++)
        {
            x = a[i+m-1] - a[i];
            if (x < min)
                min = x;
        }
        return min;
    }  
