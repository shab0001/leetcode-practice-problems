class Solution {
public:
    int mySqrt(int x) {
        long long int ans=0;
        long long int s=1,e=x;
        long long int mid,key;
        while(s<=e)
        {
            mid=(s+e)/2;
            
            if((long long) mid*mid <=x)
            {
                ans=mid;
               s=mid+1;
            }
            else
            {
                e=mid-1;
            }
           
               
            
        }
        return ans;
    }
};