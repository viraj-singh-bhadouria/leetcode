class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        int max=0;
        while(start!=end){
            int width=end-start;
            int temp=(height[start] < height[end])?(height[start]*width):(height[end]*width);
            if(temp>max){max=temp;}
            if (height[start] < height[end]) {
                start++;
            } 
            else {
                end--;
            }
        }
        return max;
    }
};