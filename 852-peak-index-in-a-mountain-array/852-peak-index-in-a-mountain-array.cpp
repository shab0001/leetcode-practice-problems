class Solution {
public:
    int peakIndexInMountainArray(vector<int>&arr) {
        	int n=arr.size();
	int s=0,e=n-1;
	int ans=-1;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(arr[mid]<arr[mid+1])
		{
			s=mid+1;
		}
		else
		{
			e=mid-1;
			ans=mid;
		}
	}
	return ans;

        
    }
};