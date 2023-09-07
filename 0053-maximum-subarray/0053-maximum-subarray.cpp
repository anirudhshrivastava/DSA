class Solution {
public:
    int maxSubArray(vector<int>& nums) {
          int back=0;
        int sum=0;
        int ans=nums[0];
        for(int j:nums){
            sum+=j;
            ans=max(ans,sum-back);
            back=min(back,sum);
        }
        return ans;
        
    }
};