class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int>run;
        run.reserve(size(nums));
        run.push_back(nums[0]);
        for(int i=1;i<size(nums);i++)
        {
            run.push_back(run[i-1]+nums[i]);
        }
        return run;
    }
};