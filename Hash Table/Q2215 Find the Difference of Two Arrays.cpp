class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> a(nums1.begin(), nums1.end());
        set<int> b(nums2.begin(), nums2.end());
        vector<int> diff1;
        vector<int> diff2;
        for (int num : a) {
            if (!b.count(num)) {
                diff1.push_back(num);
            }
        }

        for (int num : b) {
            if (!a.count(num)) {
                diff2.push_back(num);
            }
        }

        return {diff1, diff2};

    }
};