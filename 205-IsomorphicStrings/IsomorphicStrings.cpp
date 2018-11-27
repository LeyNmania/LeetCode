//--------------------- 
//  8ms beats 60% but easy to understand , used hashmap
//---------------------
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> ms,mt;
        if(s.length() != t.length())
            return false;
        for(int i=0;i<s.length();i++)
        {
            if(ms.count(s[i]) && mt.count(t[i]))
            {
                if(ms[s[i]]!=t[i])
                    return false;
            }
            else if(ms.count(s[i]) || mt.count(t[i]))
                return false;
            else
            {
                ms[s[i]] = t[i];
                mt[t[i]] = s[i];
            }
        }
        return true;
    }
};
//---------------------
// Here`s a great idea. With 'int' array it`s 8ms like above, but if with 'char' array it has decreased half of the time !
// 4ms beats 99.21% ~
//---------------------
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length())
            return false;
        char ms[256] = {0};
        char mt[256] = {0};
        for(int i=0; i<s.length(); i++)
        {
            if(ms[s[i]] != mt[t[i]])
                  return false;
            ms[s[i]] = i+1;
            mt[t[i]] = i+1;
        }
        return true;
    }
};
