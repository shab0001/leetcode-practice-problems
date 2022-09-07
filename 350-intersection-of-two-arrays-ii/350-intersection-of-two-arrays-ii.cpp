class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>result;
       int m[1001]={0};
        if(nums1.size()<nums2.size())
        {
            swap(nums1,nums2);
        }
        for (int i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
        }
       for (int i=0;i<nums2.size();i++)
        {
           if(m[nums2[i]]>0)
           {
               result.push_back(nums2[i]);
               m[nums2[i]]--;
           }
       }
        return result;
    }
};