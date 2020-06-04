/*
Reverse String
==============
URL: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3350/

Write a function that reverses a string. The input string is given as an array of characters char[].
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
You may assume all the characters consist of printable ascii characters.

Example 1:
Input: ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:
Input: ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char> &s) {
        
        int start=0;
        int end=s.size()-1;
        while(start<end){
            swap(s[start++],s[end--]);
        }
        
    }
};

void printVec(vector<char> &s){
    for(auto i : s)
        cout<<i;
    cout<<endl;
}


int main(){
    cout<<"Case 1:"<<endl;
    vector<char> input1 = {'h','e','l','l','o'};
    cout<<"Original string: ";
    printVec(input1);
    Solution().reverseString(input1);
    cout<<"Reversed string: ";
    printVec(input1);

    
    cout<<"Case 2:"<<endl;
    vector<char> input2 = {'H','a','n','n','a','h'};
    cout<<"Original string: ";
    printVec(input2);
    Solution().reverseString(input2);
    cout<<"Reversed string: ";
    printVec(input2);
    

}

