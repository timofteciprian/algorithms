//
//  main.cpp
//  findIndex
//
//  Created by Timofte Ciprian Andrei on 15/06/2018.
//  Copyright © 2018 Timofte Ciprian Andrei. All rights reserved.
//
/*
 Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 You may assume that each input would have exactly one solution, and you may not use the same element twice.
 Example:
 Given nums = [2, 7, 11, 15], target = 9,
 Because nums[0] + nums[1] = 2 + 7 = 9,
 return [0, 1].
 */

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pair;
        map<int, int> table;
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            if (table.find(num) != table.end())
            {
                pair.push_back(table[num]);
                pair.push_back(i);
                return pair;
            }
            else
                table[target - num] = i;
        }
        return pair;
    }
};

