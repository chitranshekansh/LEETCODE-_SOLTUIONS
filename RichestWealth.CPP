class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int i,j;
        int rows=accounts.size();
        int col=accounts[0].size();
        vector<int> wealth(rows,0);
        for(i=0;i<rows;i++)
        {
            for(j=0;j<col;j++)
            {
                wealth[i]+=accounts[i][j];
            }
        }
        std::sort(wealth.begin(),wealth.end());
        j=wealth.size();
        return wealth[j-1];
        
    }
};
