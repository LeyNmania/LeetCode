/*
Runtime: 4 ms, faster than 67.38% of C++ online submissions for Poor Pigs.
Memory Usage: 8.5 MB, less than 7.32% of C++ online submissions for Poor Pigs.
*/
class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        double res = log(buckets)/log(minutesToTest/minutesToDie + 1);
        return (int)ceil(res);
    }
};
