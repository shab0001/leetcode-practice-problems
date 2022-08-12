class Solution {
public:
    int trap(vector<int>& height) 
    {
        int leftmax[height.size()],rightmax[height.size()];
        int maximum=INT_MIN;
        for(int i=0;i<height.size();i++)
        {
            maximum=max(maximum,height[i]);
            leftmax[i]=maximum;
        }
         maximum=INT_MIN;
        for(int j=height.size()-1;j>=0;j--)
        {
            maximum=max(maximum,height[j]);
            rightmax[j]=maximum;
        }
        int sum=0;
        for(int i=0;i<height.size();i++)
        {
           sum=sum+(min(leftmax[i],rightmax[i])-height[i]);
           
            
        }
        return sum;
    }
};