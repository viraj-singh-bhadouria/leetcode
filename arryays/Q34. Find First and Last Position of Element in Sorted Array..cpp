class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstpos = -1;
        int lastpos = -1;
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                firstpos=mid;
                end=mid-1;
            }
            else{
                if (nums[mid]<target){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        if (firstpos == -1) {
            return {-1, -1};
        }
         start=firstpos;
         end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                lastpos=mid;
                start=mid+1;
            }
            else{
                if (nums[mid]<target){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }

        }
    return {firstpos,lastpos};       
    }
};