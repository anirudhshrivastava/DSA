class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int start=0;
        int ans=nums.size()+1;
        int i=0;
        
       while(i<nums.size()){
           sum=sum+nums[i++];
           while(sum>=target){
               ans=min(ans,i-start);
               sum=sum-nums[start++];
           }
       }
        return ans%(nums.size()+1);
    }
};