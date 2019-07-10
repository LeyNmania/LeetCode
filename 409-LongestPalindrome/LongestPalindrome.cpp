/*
Runtime: 4 ms, faster than 89.87% of C++ online submissions for Longest Palindrome.
Memory Usage: 8.9 MB, less than 32.48% of C++ online submissions for Longest Palindrome.
*/
class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> dp(256,0);
        for (auto &m : s)
            dp[m-'\0']++;
        int res = 0;
        for (auto &i : dp)
        {
            res += i%2 ? (res%2 ? i-1 : i) : i;
        }
        return res;
        
    }
};
