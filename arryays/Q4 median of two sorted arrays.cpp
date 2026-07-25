#include <algorithm>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i;
        double median=0;
        vector<double> merged;
        for(i=0;i<nums1.size();i++){
           merged.push_back(nums1[i]);
        }
        for(i=0;i<nums2.size();i++){
           merged.push_back(nums2[i]);
        }
        sort(merged.begin(), merged.end());
        if(merged.size()%2==0){
            median=(merged[(merged.size()/2)-1]+merged[merged.size()/2])/2;
        }
        else{
            median=merged[(merged.size()/2)];
        }
        return median;
    }   
};