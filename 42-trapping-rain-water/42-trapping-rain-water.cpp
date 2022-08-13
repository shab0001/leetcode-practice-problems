class Solution {
public:
   int trap(vector<int>& height)
{
	int leftmax = INT_MIN;
	int rightmax = INT_MIN, ans = 0;
	int i = 0, j = height.size() - 1;
	while (i < j)
	{
		if (height[i] < height[j])
		{
			if (height[i] > leftmax)
			{
				leftmax = max(leftmax, height[i]);
			}
			else {
				ans += (leftmax - height[i]);
			}
			i++;
		}
		else
		{
			if (height[j] > rightmax)
			{
				rightmax = max(rightmax, height[j]);
			}
			else
			{
				ans += (rightmax - height[j]);
			}
			j--;
		}
	}
       return ans;
   }
    
};