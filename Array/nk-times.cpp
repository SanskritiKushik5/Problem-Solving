// Given an array of size n and a number k, find all elements that appear more than " n/k " times.

int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int, int> map;
        int count=0;
        int limit = n/k;
        for(int i=0; i<n; i++)
            map[arr[i]]++;
        for (auto x:map)
        {
            if (x.second > limit)
                count++;
        }
        return count;  
    }
