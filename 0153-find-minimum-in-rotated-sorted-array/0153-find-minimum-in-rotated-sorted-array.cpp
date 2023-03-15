class Solution {
public:
    int findMin(vector<int>& nums) {
          int left=0;
        int right=nums.size()-1;
        int last=nums.size()-1;
        int mid;
        if(nums[0]<=nums[last])//未被轉置 &若nums只有一位數
        {
            return nums[0];
        }
        while(left<=right)
        {
            mid=(left+right)/2;
            if(nums[mid]>nums[mid+1])
            {
                return nums[mid+1];
            }
            else if(nums[mid-1]>nums[mid])
            {
                return nums[mid];
            }
            else if(nums[mid]>nums[last] && nums[mid]>nums[0])
            {
                left=mid+1;
            }
            else if(nums[mid]<nums[last] && nums[mid]<nums[0])
            {
                right=mid-1;
            }
        }
        return 0; 
    }
};