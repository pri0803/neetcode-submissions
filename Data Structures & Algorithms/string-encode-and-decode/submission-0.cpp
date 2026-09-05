class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        if(strs.empty()) return "";

        vector<int> len;
        for(string s: strs){
            len.push_back(s.size());
        }

        for(int sz : len){
            encoded_string.append(to_string(sz));
            encoded_string.push_back(',');           
        }

        encoded_string.push_back('#'); 
        for(string s : strs){
            encoded_string.append(s); 
        }
        return encoded_string;     
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        if(s.empty()) return {};
        vector<int> sizes;
        int i=0;
        while(s[i] != '#'){
            int j=i;
            while(s[j] != ','){
                j++;
            }
            sizes.push_back(stoi(s.substr(i,j-i)));
            i = j+1;
        }
        i++;
        for(int sz : sizes){
            decoded_strs.push_back(s.substr(i, sz));
            i += sz;
        }
        return decoded_strs;
    }
};
