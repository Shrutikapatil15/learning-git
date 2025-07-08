#include <iostream>
#include <vector>
#include <cmath> // for abs()

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // Step 1: Mark visited indices as negative
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0)
                nums[index] = -nums[index];
        }

        // Step 2: Collect indices with positive values (missing numbers)
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)
                res.push_back(i + 1); // i+1 was not marked, so it's missing
        }

        return res;
    }
};

// Optional: Main function to test the solution
int main() {
    Solution sol;
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
} 
//these code is for selection sort
