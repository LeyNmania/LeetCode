/*
Runtime: 16 ms, faster than 19.70% of C++ online submissions for Sqrt(x).
Memory Usage: 8.2 MB, less than 39.95% of C++ online submissions for Sqrt(x).
*/
class Solution {
public:
    int mySqrt(int x) {
        long i=0;
        for(;i*i<=x; i++)
        {
            if(i*i == x)
                return i;
        }
        return i-1;
    }
};

/*
Runtime: 8 ms, faster than 33.80% of C++ online submissions for Sqrt(x).
Memory Usage: 8.3 MB, less than 19.98% of C++ online submissions for Sqrt(x).
*/
class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)
            return 0;
        int left = 1 , right = x;
        while(1)
        {
            int mid = left + (right - left)/2;
            if(mid > x/mid)
            {
                right = mid - 1;  
            }
            else
            {
                if(mid+1 > x/(mid+1))
                    return mid;
                left = mid + 1;
            }
        }
    }
};

/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sqrt(x).
Memory Usage: 8.2 MB, less than 34.60% of C++ online submissions for Sqrt(x).
*/
class Solution {
public:
    int mySqrt(int x) {
        double ans = x;
        double delta  = 0.0001;
        while (fabs(pow(ans, 2) - x) > delta) 
        {
            ans = (ans + x / ans) / 2;
        }
        return ans;
    }
};
