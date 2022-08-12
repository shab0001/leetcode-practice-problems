class Solution {
public:
	vector<int> topKFrequent(vector<int>& nums, int k)
	{
		map<int, int>m;
		for (int i = 0; i < nums.size(); i++)
		{
			m[nums[i]]++;
		}
		priority_queue<pair<int,int>>pq;
		for (auto it = m.begin(); it != m.end(); it++)
		{
			pq.push({(*it).second, (*it).first});
		}
		vector<int>nums1;
		while (k>0 )
		{
			
			nums1.push_back(pq.top().second);
			pq.pop();
            k--;
		}
		return nums1;
	}
};