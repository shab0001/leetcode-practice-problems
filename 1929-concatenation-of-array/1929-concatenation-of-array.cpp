class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums)
    {
        vector<int>ans;
        ans.reserve(2*size(nums));
        for(int i=0;i<2*size(nums);i++)
        {
            if(i<size(nums))
            {
                ans.push_back(nums[i]);
            }
            else
            {
                ans.push_back(nums[i-size(nums)]);
            }
        }
        return ans;
    }
};