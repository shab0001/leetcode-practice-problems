class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int space, maxword=-1,word;
        for(int i=0;i<n;i++){
            space=0;
            for(int j=0;j<sentences[i].length();j++){
                if(sentences[i][j]==' ')
                {
                    space++;
                }
            }
            word=space+1;
            maxword=max(maxword,word);
        }
    return maxword;
    }
};