/*
Runtime: 24 ms, faster than 31.18% of C++ online submissions for Valid Anagram.
Memory Usage: 9.4 MB, less than 55.79% of C++ online submissions for Valid Anagram.
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};

/*
Runtime: 12 ms, faster than 88.47% of C++ online submissions for Valid Anagram.
Memory Usage: 9.5 MB, less than 40.97% of C++ online submissions for Valid Anagram.
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        int n = s.length();
        int count[26] = {0};
        for(int i = 0; i < n; i++)
        {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for(int i = 0; i < 26; i++)
        {
            if(count[i])
                return false;
        }
        return true;
    }
};
