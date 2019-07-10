/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Base 7.
Memory Usage: 8.2 MB, less than 56.00% of C++ online submissions for Base 7.
*/
class Solution {
public:
    string convertToBase7(int num) {
        int x = abs(num);
        string res;
        do
        {
            res = to_string(x%7) + res;    
        }while(x/=7);
        
        return (num >= 0 ? "" : "-") + res;
    }
};
