//
//  main.cpp
//  combinationsOfPhoneNumber
//
//  Created by Timofte Ciprian Andrei on 19/06/2018.
//  Copyright © 2018 Timofte Ciprian Andrei. All rights reserved.
//
/*
 Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.
 A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.
 Example:
 Input: "23"
 Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
 Note:
 Although the above answer is in lexicographical order, your answer could be in any order you want.
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void backTrack(string digits, vector<string> dict, string& curComb, vector<string>& res)
{
    int pos = curComb.length();
    if(pos == digits.length()){
        res.push_back(curComb);
        return;
    }
    int index = digits[pos]-'0';
    for(int i = 0; i < dict[index].length(); i ++){
        curComb.push_back(dict[index][i]);
        backTrack(digits,dict,curComb,res);
        curComb.pop_back();
    }
}

vector<string> letterCombinations(string digits) {
    vector<string> res;
    if(digits == "")
        return res;
    vector<string> dict = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string curComb;
    backTrack(digits,dict,curComb,res);
    return res;
}

int main(int argc, const char * argv[]) {
    string digits = {"78"};
    vector<string> res;
    res = letterCombinations(digits);
    for(int i = 0; i < res.size(); i++)
        cout<< res[i] << " " ;
    return 0;
}

