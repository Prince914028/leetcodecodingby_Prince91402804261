class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        
        long long sum = 0, squareSum = 0;
        
        for(int num : nums) {
            sum += num;
            squareSum += (long long)num * num;
        }
        
        long long S = (long long)n * (n + 1) / 2;
        long long S2 = (long long)n * (n + 1) * (2*n + 1) / 6;
        
        long long diff = sum - S;              // x - y
        long long squareDiff = squareSum - S2; // x² - y²
        
        long long sumXY = squareDiff / diff;   // x + y
        
        int x = (diff + sumXY) / 2; // duplicate
        int y = x - diff;           // missing
        
        return {x, y};
    }
};