class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=-1;
        int left=0;
        int right=nums.size()-1;
        while(right>=left){
            int mid=(left+right)/2;
            if (nums[mid]==target){n=mid;}
            if(nums[left]<=nums[mid]){
                if (target >= nums[left] && target < nums[mid]) {
                    right = mid - 1;
                }else {
                    left = mid + 1;
                }
            }
            else {
                if (target > nums[mid] && target <= nums[right]) {
                    left = mid + 1;  
                } else {
                    right = mid - 1;
                }
            }

        }
        return n;
    }
};