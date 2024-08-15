class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        nums.push_back(target);
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        int point = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                point = i;
                break;
            }
        }
        return point;
    }
};
