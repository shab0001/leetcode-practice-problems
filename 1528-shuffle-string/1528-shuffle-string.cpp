class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        char t[s.length()+1];
        int i;
        for(i=0;i<s.length();i++)
        {
            t[indices[i]]=s[i];
        }
        t[i]='\0';
        return t;
    }
};