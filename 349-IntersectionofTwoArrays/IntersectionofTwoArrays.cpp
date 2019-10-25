/*
Runtime: 8 ms, faster than 74.86% of C++ online submissions for Intersection of Two Arrays.
Memory Usage: 9.3 MB, less than 63.33% of C++ online submissions for Intersection of Two Arrays.
*/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m(nums1.begin(), nums1.end());
        vector<int> res;
        for (auto a : nums2)
        {
            if (m.erase(a))
                res.push_back(a);
        }
        return res;
        
    }
};
