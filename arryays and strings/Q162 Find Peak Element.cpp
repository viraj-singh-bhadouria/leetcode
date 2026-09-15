class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size()-1;
        int s=0;
        int k=n;
        while(s<k){
            if(nums[s]>nums[s+1]){return s;}
            if(nums[k]>nums[k-1]){return k;}
            int mid=s+(k-s)/2;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){return mid;}
            if(nums[mid+1]>nums[mid-1]){
                s=mid+1;
            }
            else{
                k=mid-1;
            }
            
        }
        return 0;
    }
};