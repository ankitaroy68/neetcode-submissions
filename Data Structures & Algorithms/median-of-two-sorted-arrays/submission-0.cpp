class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()) return findMedianSortedArrays(nums2, nums1);
        int n1 = nums1.size(), n2 = nums2.size();
        int halfSize = (n1+n2+1)/2;
        int l = 0, r = n1;
        while(l<=r){
            int i = (l+r)/2;
            int j = halfSize-i;
            int nums1Left=(i==0)?INT_MIN:nums1[i-1];
            int nums1Right=(i==n1)?INT_MAX:nums1[i];
            int nums2Left=(j==0)?INT_MIN:nums2[j-1];
            int nums2Right=(j==n2)?INT_MAX:nums2[j];
            if(nums1Left<=nums2Right && nums2Left<=nums1Right){
                if((n1+n2)%2) return max(nums1Left, nums2Left);
                else return (max(nums1Left,nums2Left)+min(nums1Right, nums2Right)) / 2.0;;
            }
            else if(nums1Left>nums2Right) r=i-1;
            else l=i+1;
        }
        return -1;
    }
};
