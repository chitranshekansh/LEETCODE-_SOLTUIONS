class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int count=0;
        for(int i=0;i<n;i++)
        {
            int current=nums[i];
            count=0;
            for(int j=0;j<n;j++)
            {
                if(current>nums[j])
                count++;
            }
            ans[i]=count;
        }
        return ans;
    }
};
