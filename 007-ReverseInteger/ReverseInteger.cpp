// 12ms beats 97% , considered overflow
//----------------------
class Solution {
public:
    int reverse(int x) {
        long res = 0;
        while(x)
        {
            res = res * 10 + x % 10;
            x /= 10;
        }
        return (res > INT_MAX || res < INT_MIN)? 0 : res;
    }
};
