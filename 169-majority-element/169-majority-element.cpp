class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int ans=0;
        for(auto x:m)
        {
            if(x.second>(nums.size()/2))
            {
                ans=x.first;
            }
        }
        return ans;
    }
};