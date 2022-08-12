class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int f = 0, l = n - 1, flag = 0, mid;
	while (f <= l)
	{
		mid = (f + l) / 2;
		if (nums[mid] == target)
		{
			flag = 1;
			break;
		}
		else if (nums[mid] > target)
		{
			l = mid - 1;
		}
		else
		{
			f = mid + 1;
		}
	}
	if (flag == 1)
	{
		return mid;
	}
	else
	{
		return -1;
	}
}

        
    
};