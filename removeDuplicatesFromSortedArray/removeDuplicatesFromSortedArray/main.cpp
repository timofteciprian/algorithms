//
//  main.cpp
//  removeDuplicatesFromSortedArray
//
//  Created by Timofte Ciprian Andrei on 18/06/2018.
//  Copyright © 2018 Timofte Ciprian Andrei. All rights reserved.
//
/*
 Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
 Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
 Example 1:
 Given nums = [1,1,2],
 Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
 It doesn't matter what you leave beyond the returned length.
 Example 2:
 Given nums = [0,0,1,1,1,2,2,3,3,4],
 Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.
 It doesn't matter what values are set beyond the returned length.
 */
#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i-1] == nums[i])
        {
            nums.erase(nums.begin() + i);
            i--;
        }
    }
    return nums.size();
}
int main(int argc, const char * argv[]) {
    vector<int> a;
    a.push_back(1);
    a.push_back(1);
    a.push_back(2);
    cout<<removeDuplicates(a);
    
    return 0;
}
