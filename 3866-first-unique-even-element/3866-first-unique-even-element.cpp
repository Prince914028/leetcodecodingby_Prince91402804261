class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Count frequency
        for (int num : nums) {
            freq[num]++;
        }

        // Find first even number with frequency 1
        for (int num : nums) {
            if (num % 2 == 0 && freq[num] == 1) {
                return num;
            }
        }

        return -1;
    }
};