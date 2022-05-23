class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int evenCount = 0;
        
        for (int i=0; i<nums.size(); i++) {
            while(nums[i]>0){
                count += 1;
                nums[i] = nums[i]/10;
            }
            
            if (count % 2 == 0){
                evenCount += 1;
            }
            
            count = 0;
        }
        
        return evenCount;
    }
};