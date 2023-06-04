class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count;
        vector<int> ans;

        for(int i=0;i< sentences.size();i++)
        {
            count=0;
            for(char ch: sentences[i])
            {
                if(ch==' ')
                count ++;
            }
            ans.push_back(count);
        }
        sort(ans.begin(),ans.end(),greater<int>());

        return ans[0]+1;




        
    }
};
