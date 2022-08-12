class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        string t="";
        priority_queue<pair<int,char>>pq;
        for (auto it = m.begin(); it != m.end(); it++)
	{
        pq.push({(*it).second,(*it).first});
    }
        while (!pq.empty())
	{
		int maximum = pq.top().first;
		
           while(maximum--)
           {
               t+=pq.top().second;
           }
            pq.pop();
           }
        
        return t;
    }
};