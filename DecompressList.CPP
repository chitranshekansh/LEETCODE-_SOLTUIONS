class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int j=0;

        for(int i=0;i<nums.size();i+=2)
        {
            
           while(nums[i]!=0)
           {
             ans.push_back(nums[j+1]);
               nums[i]--;
           }
           j+=2;
        }
        return ans;
    }
};
