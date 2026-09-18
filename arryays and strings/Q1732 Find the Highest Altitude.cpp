class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        ans.push_back(0);
        for(int i=0;i<gain.size();i++){
            ans.push_back(gain[i]+ans[i]);
        }
        int max=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]>max) max=ans[i];
        }
        return max;
    }
};