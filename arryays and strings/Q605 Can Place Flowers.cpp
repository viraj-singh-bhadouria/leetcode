class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        int k=flowerbed.size();
        if(k==0) return false;
        if(n==0) return true;
        if(k==1 && n==1 && flowerbed[0]==0)return true;
        else false;
        if(flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0]=1;
            count++;
        }
        if(flowerbed[k-1]==0 && flowerbed[k-2]==0){
            flowerbed[k-1]=1;
            count++;
        }
        for(int i=1;i<k-1;i++){
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                count++;
            }
        }
        if(count>=n){
            return true;
        }
        return false;
    }
};