class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       unordered_map<int,int> mpp;
       for(int i=0; i<numbers.size(); i++){
        int num1 = numbers[i];
        int num2 = target - num1;

        if(mpp.find(num2) != mpp.end()){
            return {mpp[num2], i+1};
        }
        mpp[num1] = i+1;
       }
    }
};