class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax = 1; // Tracks the maximum product at the current position
        int currMin = 1; // Tracks the minimum product at the current position
        int maxSum = INT_MIN; // Global maximum product

        for (int value : nums) {
            if (value < 0) {
                // Swap currMax and currMin when encountering a negative number
                swap(currMax, currMin);
            }

            // Update currMax and currMin with the current value
            currMax = max(value, currMax * value);
            currMin = min(value, currMin * value);

            // Update the global maximum product
            maxSum = max(maxSum, currMax);

            // Reset to handle zeros
            if (value == 0) {
                currMax = 1;
                currMin = 1;
            }
        }

        return maxSum;
    }
};
