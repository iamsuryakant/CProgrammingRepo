/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        //if(n == 0) return -1;

        int l = 0, r = n-1;

        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid] == target) 
                return mid;
            if(nums[mid] > nums[r]){
                if(nums[l] <= target && target < nums[mid]) 
                    r = mid-1;
                else
                    l = mid+1;
            }else if(nums[mid] < nums[l]){
                if(nums[mid] < target && target <= nums[r])
                    l = mid+1;
                else
                    r = mid-1;
            }
            else{
                if(target < nums[mid])
                    r = mid-1;
                else
                    l = mid+1;
            }
            
        }
        return -1;
        
    }
};
// @lc code=end

