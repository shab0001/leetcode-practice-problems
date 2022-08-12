class Solution {
public:
    void replace(string &s, int i, string &t )
{
	if (i == s.length())
	{
		return;
	}
	if (s[i] == '.')
	{
		t.push_back('[');
		t.push_back('.');
		t.push_back(']');
		replace(s, i + 1, t);
	}
	else
	{
		t.push_back(s[i]);
		replace(s, i + 1, t);
	}

}
    string defangIPaddr(string address) {
        
        string t;
	replace(address, 0, t);
        return t;
    }
};