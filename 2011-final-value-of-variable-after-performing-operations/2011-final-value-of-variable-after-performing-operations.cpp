class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(int i=0;i<size(operations);i++)
        {
            if(operations[i]=="X++" or operations[i]=="++X")
            {
                x++;
                
            }
            else
            {
                x--;
            }
        }
        return x;
        
    }
};