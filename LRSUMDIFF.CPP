class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int i,j;
        vector<int> lsum(n,0),rsum(n,0);
        
        for(i=0;i<n;i++)
        {
            
            for(j=i;j>0;j--)
            {
                if(j==0)
                lsum[i]+=0;
                else
                lsum[i]+=nums[j-1];

            }
        }

        

        for(i=0;i<n;i++)
        {
            
            for(j=i;j<n;j++)
            {
                if(j==(n-1))
                rsum[i]+=0;
                else
                rsum[i]+=nums[j+1];

            }
        }

        for(i=0;i<n;i++)
        {
            ans[i]=abs(lsum[i] - rsum[i]);
        }
        
        return ans;

        
    }
};
