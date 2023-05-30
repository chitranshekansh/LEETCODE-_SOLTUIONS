class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        vector<int> target;
         
         int i,ind,num;
         for(i=0;i<nums.size();i++)
         {
             num=nums[i];
             ind=index[i];
             target.insert(target.begin()+ind,num);
         }
        return target;
    }
};
