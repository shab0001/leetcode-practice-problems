class Solution {
public:
    int lengthOfLastWord(string s) {
        int count =0;
        int i;
        for(i=s.length()-1;s[i]==' ';i--);
        for(int j=i;j>=0 and s[j]!=' ';j--)
        {
            count++;
        }
        return count;

       
    }    
    
};