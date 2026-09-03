class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> mpp;
        int count = 0;
        if(s.length() != t.length()) return false;
        for(char ch : s){
           mpp[ch]++;
        }   

        for(char ch : t){
            mpp[ch]--;
        }   

        for(auto it : mpp){
            if(it.second != 0) {
                return false;
            }
        }
        return true;
    }
};
