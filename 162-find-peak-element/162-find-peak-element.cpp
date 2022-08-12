class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
	int s=0,e=n-1;
	int ans=-1;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(mid+1==n or nums[mid]>=nums[mid+1])
		{
			e=mid-1;
			ans=mid;
		}
		else
		{
			s=mid+1;
		}
	}
	return ans;
        
    }
};