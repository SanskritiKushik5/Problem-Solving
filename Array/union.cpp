// Find the Union and Intersection of the two sorted arrays.

int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_map<int, int> map;
        for(int i=0; i<n; i++)
            map[a[i]]++;
        for(int j=0; j<m; j++)
            map[b[j]]++;
        return map.size();
    }
