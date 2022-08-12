class Solution {
public:
     int kadane(vector<int>&a, int n)
{
	int max_so_far = INT_MIN;
	int cursum = 0;
	for (int i = 0; i < n; i++)
	{
		cursum += a[i];
		if (cursum > max_so_far)
		{
			max_so_far = cursum;
		}
		if (cursum < 0)
		{
			cursum = 0;
		}
	}
	return max_so_far;
}
int max_circular(vector<int>&a, int n)
{
	int max_kadane = kadane(a, n);
	if (max_kadane < 0)
	{
		return max_kadane;
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		a[i] = -a[i];
	}
	sum = sum + kadane(a, n);
	int maxsum = max(sum, max_kadane);
	return maxsum;
}
    int maxSubarraySumCircular(vector<int>&a)
    {
        int n=a.size();
       return  max_circular(a, n);
       
    }
};