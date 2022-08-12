class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=size(nums);
        sort(nums.begin(),nums.end());
        int sum=0,minpair;
  for(int i=0;i<n;i+=2)
  {
minpair=min(nums[i],nums[i+1]);
sum+=minpair;
  }
  return sum;
    }
};