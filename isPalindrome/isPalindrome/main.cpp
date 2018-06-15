//
//  main.cpp
//  isPalindrome
//
//  Created by Timofte Ciprian Andrei on 15/06/2018.
//  Copyright © 2018 Timofte Ciprian Andrei. All rights reserved.
//

/*
 Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
 
 Example 1:
 
 Input: 121
 Output: true
 Example 2:
 
 Input: -121
 Output: false
 Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
 Example 3:
 
 Input: 10
 Output: false
 Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 */

#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0))
            return false;
        int palindrome = 0;
        while(x>palindrome){
            palindrome = palindrome*10 + x%10;
            x=x/10;
        }
        return (x == palindrome) || (x == palindrome/10);
        
    }
};
