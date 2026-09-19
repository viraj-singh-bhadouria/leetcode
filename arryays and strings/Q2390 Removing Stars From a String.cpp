class Solution {
public:
    string removeStars(string s) {
        string res="";
        for(char p:s){
            if (p=='*'){
                res.pop_back();
            }
            else{
                res.push_back(p);
            }
        }
        return res;
    }
};