class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int curCount = 0;
        
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == 1) {
                curCount += 1;
            }
            else {
                maxCount = max(curCount, maxCount);
                curCount = 0;
            }
        }
        
        return max(curCount, maxCount);
    }
};