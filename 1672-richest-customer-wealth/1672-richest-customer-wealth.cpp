class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxcolsum=INT_MIN;
            for(int i=0;i<accounts.size();i++)
            {
                int colsum=0;
                for(int j=0;j<accounts[i].size();j++)
                {
                    colsum+=accounts[i][j];
                }
                maxcolsum=max(maxcolsum,colsum);
            }
        return maxcolsum;
    }
};