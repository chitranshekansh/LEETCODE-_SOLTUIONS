class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> marray(nums1.size() + nums2.size());

        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),marray.begin());
        if(marray.size() %2==0)
        {
            
            int median1 = marray.size()/2;
            int median2 =  median1 - 1;
            return (marray[median1] + marray[median2]) / 2.0;
             }
        else
        {
            
            int median=marray.size()/2;
            return marray[median];
       
        }
    }
};
