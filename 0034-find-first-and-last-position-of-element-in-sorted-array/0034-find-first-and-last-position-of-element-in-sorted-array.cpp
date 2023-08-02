class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int start = 0;
        int end = nums.size() - 1;
        int first = -1;
        int second = -1;
        while (start <= end )
        {
           int mid = start + (end - start)/2;
            if(target == nums[mid])
            {
                first = mid;
                end = mid - 1;
            }
            else if(nums[mid]>target)
            {
                end =  mid - 1;
            }
            else
            {
                start = mid+1;
            }
        }
        ans.push_back(first);
        start = 0;
         end = nums.size() - 1;
         
        
        while (start <= end )
        {
             int mid = start + (end - start)/2;
            if(target == nums[mid])
            {
              second = mid;
                start = mid + 1;
            }
            else if(nums[mid]<target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid -1;
            }
        }
        ans.push_back(second);
        return ans;
        
    }
};