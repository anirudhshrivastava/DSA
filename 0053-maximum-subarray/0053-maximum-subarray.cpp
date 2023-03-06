class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxi=nums[0];
        for(int i=0;i<n;i++){
            //step1
            sum+=nums[i];
            //step2
            maxi=max(maxi,sum);
            //step3
            if(sum<0)
                sum=0;
        }
        return maxi;
    }
};