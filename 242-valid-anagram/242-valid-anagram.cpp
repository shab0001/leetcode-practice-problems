class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length()!=t.length())
        {
            return false;
        }
       unordered_map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
         for(int i=0;i<s.length();i++)
        {
             if(m[t[i]]>=1)
             {
                 m[t[i]]--;
             }
             else
             {
                 return false;
             }
         }
        return true;
    }
};