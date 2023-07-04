class Solution {
public:
    bool solve(int index,vector<int>& nums,int n,int target,vector<vector<int>> &dp){
        
       // memset(dp,-1,sizeof(dp));
        if(index>=n){
            return 0;
        }
        if(target<0){
            return 0;
        }
        if(target==0){
            return 1;
        }
        if(dp[index][target]!=-1){
            return dp[index][target];
        }
        bool inc=solve(index+1,nums,n,target-nums[index],dp);                         bool excl= solve(index+1,nums,n,target,dp);
        
        return dp[index][target]=inc||excl;
    }
    bool canPartition(vector<int>& nums)
    {
        int n=nums.size();
     int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return solve(0,nums,n,target,dp);
    }
};