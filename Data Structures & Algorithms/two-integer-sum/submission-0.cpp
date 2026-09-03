class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        for(int i=0; i<nums.size(); i++){
            int num1 = nums[i];
            int num2 = target - num1;

            if(mpp.find(num2) != mpp.end()){
                ans.push_back(mpp[num2]);
                ans.push_back(i);
            }
            mpp[num1] = i;
        }
        return ans;
    }
};
