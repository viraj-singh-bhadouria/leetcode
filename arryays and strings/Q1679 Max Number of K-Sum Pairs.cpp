class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int a=0;
        int b=n-1;
        int count=0;
        while (a<b){
            int sum=nums[a]+nums[b];
            if(sum==k){
                count++;
                a++;
                b--;
            }
            else if (sum < k) {
                a++;
            } else {
                b--;
            }
        }
        return count;
    }
};