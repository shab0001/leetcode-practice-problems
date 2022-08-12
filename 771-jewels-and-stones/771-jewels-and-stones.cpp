class Solution {
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int freq[256]={0};
        for(int i=0;i<stones.length();i++)
        {
            freq[stones[i]]++;
        }
        int jew=0;
         for(int i=0;i<jewels.length();i++)
        {
             if(freq[jewels[i]]>0)
             {
                 jew+=freq[jewels[i]];
             }
         }
        return jew;
    }
};