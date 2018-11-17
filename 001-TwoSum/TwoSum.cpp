class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0;
        int b=0;
        
        for(a=0;a<nums.size();a++)
        {
            for(b=a+1;b<nums.size();b++)
            {
                if((nums[a]+nums[b])==target)
                    return vector<int> {a,b};
            }
        }
        exit(1);
    }
};   
// Above 70+ms beats 20%~40%
// below 4ms beats 99.96%
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            int tmp = target - nums[i];
            if(hash.find(tmp) != hash.end())
            {
                result.push_back(hash[tmp]);
                result.push_back(i);
                return result;
            }
            hash[nums[i]]=i;
        }
        return result;
    }
};
