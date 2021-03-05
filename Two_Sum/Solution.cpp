#include "Solution.h"
#include <iostream>
#include <unordered_map>
using namespace std;

vector<int> Solution::twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashtable;
    vector<int> result;
    for (int i = 0; i < nums.size(); ++i) {
        auto it = hashtable.find(target - nums[i]);
        if (it != hashtable.end()) {
            result.push_back(it->second);
            result.push_back(i);
        }
        hashtable[nums[i]] = i;
    }
    return result;
}


