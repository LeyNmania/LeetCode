// This is a fucking genius answer. I learnt it from the discuss part but I also want to learn the general solution.
// So the first is the BRILLIANT IDEA and the 2nd is general.
// Both are 0ms
//----------------------------------------------------
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for(int i = digits.size()-1;i>=0;--i)
        {
            if(digits[i] == 9)
                digits[i] = 0;
            else
            {
                ++digits[i];
                return digits;
            }
        }
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};
//---------------------------------------------------
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int add = 0;
	int a = 1;
	vector<int> res;
	for(int i = digits.size() - 1; i >= 0; --i)
	{
		int num = digits[i] + add + a;
		a = 0;
		add = num / 10;
		res.push_back(num % 10);
	}
	if(add != 0)
		res.push_back(add);
	reverse(res.begin(), res.end());
	return res;
    }
};

