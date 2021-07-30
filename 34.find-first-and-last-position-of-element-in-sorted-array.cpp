/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> res;

        if (nums.size() == 0 && target == 0) {
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) {
                int left_index = mid, right_index = mid;
                while (left_index >= 0 && nums[left_index] == target) {
                    left_index--;
                }
                while (right_index < nums.size() && nums[right_index] == target) {
                    right_index++;
                }
                res.push_back(left_index + 1);
                res.push_back(right_index - 1);
                return res;

            } else if (nums[mid] < target) {
                left = mid + 1;

            } else {
                right = mid - 1;
            }
        }
        res.push_back(-1);
        res.push_back(-1);
        return res;
    }
};
// @lc code=end

