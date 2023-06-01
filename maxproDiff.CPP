class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int pair1=nums.back() * nums[nums.size()-2];
        int pair2=nums[0]*nums[1];


        return (pair2-pair1) ;
    }
};
