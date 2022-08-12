class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int flag=0;
                for(int i=0;i<nums.size();i++)
                {
                    if(m[nums[i]]>1)
                    {
                        flag=1;
                    }
                }
        if(flag==1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};