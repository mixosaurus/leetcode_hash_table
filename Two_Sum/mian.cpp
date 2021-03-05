#include <iostream>
#include "Solution.h"
using namespace std;

//1. 两数之和
int main(){
    Solution solution;
    vector<int> nums = { 2,7,11,15 };
    vector<int> result= solution.twoSum(nums, 9);
    for (int v : result) {
        cout << v << " ";
    }
    return 0;
}

