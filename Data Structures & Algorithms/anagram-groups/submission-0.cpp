class Solution {
public:
    string generate (string word){
        string new_word;
        int freq;
        int arr[26] = {0};
        for(char &ch : word){
            arr[ch-'a']++;
        }

        for(int i=0; i<26; i++){
            freq = arr[i];
            if(freq > 0){
                new_word += string(freq, i+'a');
            }
        }
        return new_word;
      
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mpp;

        for(int i=0; i<strs.size(); i++){
            string word = strs[i];
            string sorted_word = generate(word);
            mpp[sorted_word].push_back(word);
        }

        for(auto it : mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
