//
// Runtime: 4 ms, faster than 99.51% of C++ online submissions for Best Time to Buy and Sell Stock.
//

class Solution {
public:
    int maxProfit(vector<int>& p) {
        int max=0;
        int min=INT_MAX;
        for(int i=0;i<p.size();i++)
        {
            if(min>p[i])
                min=p[i];
            else if(p[i]-min>max)
                max=p[i]-min;
        }
        return max;
    }
};
