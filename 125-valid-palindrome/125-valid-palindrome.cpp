class Solution {
public:
    bool isPalindrome(string s)
{
	int i = 0, j = s.length() - 1;
	while (i <= j)
	{
		if (isalnum(s[i]) and isalnum(s[j]))
		{
			if (isupper(s[i]))
			{
				s[i] = tolower(s[i]);
			}
			if (isupper(s[j]))
			{
				s[j] = tolower(s[j]);
			}
			if (s[i] != s[j])
			{
				return false;
			}
			i++;
			j--;
		}
		else if (isalnum(s[i]))
		{
			j--;
		}
		else if (isalnum(s[j]))
		{
			i++;
		}
		else
		{
			i++;
			j--;
		}
	}
	return true;
}
    
};