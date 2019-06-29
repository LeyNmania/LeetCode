/*
Runtime: 36 ms, faster than 95.89% of C++ online submissions for Assign Cookies.
Memory Usage: 10.2 MB, less than 93.36% of C++ online submissions for Assign Cookies.
*/
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0;
        int j=0;
        int gs = g.size();
        int js = s.size();
        while(i<gs && j<js)
        {
            if(s[j]>=g[i])
                ++i;
            ++j;
        }
        return i;
    }
};
