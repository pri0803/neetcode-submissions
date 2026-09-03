class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> RightProd(n);
        vector<int> LeftProd(n);
        
        //for Right products
        RightProd[n-1] = 1;
        for(int i=n-2; i>=0; i--){
            RightProd[i] = nums[i+1] * RightProd[i+1];
        }

        //for left Products
        LeftProd[0] = 1;
        for(int i=1; i<n; i++){
            LeftProd[i] = nums[i-1] * LeftProd[i-1];
        }

        //for final ans

        for(int j=0; j<n; j++){
            ans[j] = RightProd[j]*LeftProd[j];
            
        }
        return ans;
    }
};
