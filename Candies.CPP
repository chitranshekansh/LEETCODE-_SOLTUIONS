class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<int> temp(n);
        vector<bool> ans(n);
        int count=0,i,j;
        for(i=0;i<n;i++)
        {
            temp[i]=candies[i]+extraCandies;
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(temp[i]>=candies[j])
                {
                    count=1;
                }
                else
                {
                    count=0;
                    break;
                }
            }

            if(count==0)
            ans[i]=false;
            else
            ans[i]=true;
        }
        return ans;

    }
};
