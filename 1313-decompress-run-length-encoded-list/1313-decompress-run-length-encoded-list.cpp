class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
         vector<int>r;
        for(int i=0;i<nums.size();i+=2)
        {
            int f=nums[i];
            while(f--)
            {
                r.push_back(nums[i+1]);
            }
            
        }
        return r;
    }
};