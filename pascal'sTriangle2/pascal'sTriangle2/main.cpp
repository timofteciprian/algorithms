//
//  main.cpp
//  pascal'sTriangle2
//
//  Created by Timofte Ciprian Andrei on 16/06/2018.
//  Copyright © 2018 Timofte Ciprian Andrei. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

/*
 Given a non-negative index k where k ≤ 33, return the kth index row of the Pascal's triangle.
 Note that the row index starts from 0.

 Example:
 Input: 3
 Output: [1,3,3,1]

 */
vector<int> getRow1(int rowIndex) {
    vector<int> vector1, vector2;
    vector1.push_back(1);
    if(rowIndex == 0)
        return vector1;
    vector1.push_back(1);
    if(rowIndex == 1)
        return vector1;
    vector2.push_back(1);
    for(int k=1; k<rowIndex; k++){
        if(k % 2 != 0){
            vector2.clear();
            vector2.push_back(1);
            for(int i=1; i < k+1; i++)
                vector2.push_back(vector1[i-1] + vector1[i]);
            vector2.push_back(1);
        }else{
            vector1.clear();
            vector1.push_back(1);
            for(int i=1; i < k+1; i++)
                vector1.push_back(vector2[i-1] + vector2[i]);
            vector1.push_back(1);
        }
    }
    if(rowIndex % 2 == 0)
        return vector2;
    else
        return vector1;
}

vector<int> getRow2(int rowIndex) {
    vector<int> preRow(1,1);
    for (int i = 1; i <= rowIndex; i++){
        vector<int> newRow(i+1, 1);
        for  (int j = 1 ; j < i; j++)
            newRow[j] = preRow[j-1] + preRow[j];
        preRow = newRow;
    }
    return preRow;
}


int main(int argc, const char * argv[]) {
    int j=7;
    vector < int > a = getRow1(j);
    for(int i=0; i<j+1;i++)
        cout<<a[i];
    vector < int > b = getRow1(j);
    for(int i=0; i<j+1;i++)
        cout<<b[i];
    return 0;
}


















