#ifndef SRC_EASY_TWO_SUM_HPP
#define SRC_EASY_TWO_SUM_HPP

#include <vector>
#include "../logger/logger.hpp"

using namespace std;

class TwoSumSolver {
    /*
    Problem: Two Sum

    Difficulty: Easy

    Description:
    Given an array of integers and an integer target, return indices of the two numbers such that they add up to target.
    You may assume that each input would have exactly one solution, and you may not use the same element twice.
    You can return the answer in any order.

    Constraints:
    1) 2 <= nums.length <= 104
    2) -109 <= nums[i] <= 109
    3) -109 <= target <= 109
    4) Only one valid answer exists.

    Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
    */
public:
    TwoSumSolver() {};

    static vector<int> solve(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    return vector<int>(nums[i], nums[j]);
                }
            }
        }
        return {};
        // for (const auto &n : nums) {
        //     std::cout << element << " ";
        // }
    }

    static void driver() {
        TwoSumSolver solver;
        vector<int> nums = {2, 7, 11, 15};
        int target = 9;
        vector<int> result = solver.solve(nums, target);
        // Logger::info("The solution is: {}", result);
    }
};

#endif // SRC_EASY_TWO_SUM_HPP