class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        int e=n-1;
        vector<int>v;
        int ans=0;
        while(s<=e){
            if(nums[s]<nums[e]){
                return nums[s];
            }
            int mid=s+(e-s)/2;
            int next=(mid+1)%n;
            int prev=(mid+n-1)%n;
            if(nums[mid]<=nums[prev] && nums[mid]<=nums[next]){
                ans=nums[mid];
            }
            if(nums[s]<=nums[mid]){
                s=mid+1;
            }
            else if(nums[mid]<=nums[e]){
                e=mid;
            }
        }
        return ans;
    }
};