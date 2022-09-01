class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        map<int,int>m;
      for(int i=0;i<nums.size();i++)
      {
          m[nums[i]]++;
      }
        int ans=0,prev=0;
      for(auto x: m)
      {
        
          ans+=((x.second+1-prev)/2)*x.first;
            prev=(prev+x.second)%2;
        }
        return ans;
    }
        
};