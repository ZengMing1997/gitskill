/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        return pos;
    }
};

