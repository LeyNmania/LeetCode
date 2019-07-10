/*
Runtime: 40 ms, faster than 87.11% of C++ online submissions for Kth Smallest Element in a Sorted Matrix.
Memory Usage: 11.8 MB, less than 99.90% of C++ online submissions for Kth Smallest Element in a Sorted Matrix.
*/
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int l = matrix[0][0] , r = matrix[n-1][n-1];
        int mid = 0;
        while(l < r)
        {
            mid = l + (r-l)/2 ;
            int num = 0;
            for (int i = 0; i < n; ++i)
            {
                int pos = upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
                num += pos;
            }
            if (num < k)
                l = mid + 1;
            else
                r = mid;
        }
        return l;
    }
};
