class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ones = 0;
        int twos = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];

            ones = (ones ^ num) & ~twos;
            twos = (twos ^ num) & ~ones;
        }

        return ones;
    }
};
