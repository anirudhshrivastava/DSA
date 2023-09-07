class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int maxi=nums[0];
        for(int i=0;i<n;i++){
            sum=max(sum+nums[i],nums[i]);
            maxi=max(maxi,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};