class Solution {
public:
    int maxArea(vector<int>& height) {
    int n=height.size();
    int maxarea=INT_MIN;
    int area=0;
    int j = n - 1;
	int i = 0;
	while (i < j) {
		area = (j - i) * min(height[i], height[j]);
		maxarea = max(maxarea, area);
		if (height[i] < height[j]) {
			i++;
		}
		else {
			j--;
		}
	}
	return maxarea;

    }
};