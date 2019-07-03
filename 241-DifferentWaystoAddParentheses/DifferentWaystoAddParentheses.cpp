/*
Runtime: 8 ms, faster than 59.10% of C++ online submissions for Different Ways to Add Parentheses.
Memory Usage: 13.7 MB, less than 28.24% of C++ online submissions for Different Ways to Add Parentheses.
*/
class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        vector<int> res ;
        int size = input.size();
        for(int i = 0; i < size; ++i)
        {
            char c = input[i];
            if(c == '+' || c == '-' || c == '*')
            {
                vector<int> result1 = diffWaysToCompute(input.substr(0, i));
                vector<int> result2 = diffWaysToCompute(input.substr(i+1));
                for(auto n1 : result1)
                    for(auto n2 : result2)
                    {
                        if(c == '+')
                            res.push_back(n1+n2);
                        else if(c == '-')
                            res.push_back(n1-n2);
                        else
                            res.push_back(n1*n2);
                    }
            }
        }
        if (res.empty())
            res.push_back(stoi(input));
        return res;
    }
};
