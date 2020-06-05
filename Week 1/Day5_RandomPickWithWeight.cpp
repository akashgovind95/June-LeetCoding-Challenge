/*
Random Pick with Weight
URL: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3351/

Given an array w of positive integers, where w[i] describes the weight of index i, write a function pickIndex which randomly picks an index in proportion to its weight.

Note:
1 <= w.length <= 10000
1 <= w[i] <= 10^5
pickIndex will be called at most 10000 times.

Example 1:
Input: 
["Solution","pickIndex"]
[[[1]],[]]
Output: [null,0]

Example 2:
Input: 
["Solution","pickIndex","pickIndex","pickIndex","pickIndex","pickIndex"]
[[[1,3]],[],[],[],[],[]]
Output: [null,0,1,1,1,0]

Explanation of Input Syntax:
The input is two lists: the subroutines called and their arguments. 
Solution's constructor has one argument, the array w. pickIndex has no arguments. Arguments are always wrapped with a list, even if there aren't any.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    
    vector<int> v;
    Solution(vector<int>& w) {
        int sum=0;
        for(auto i : w){
            sum+=i;
            v.push_back(sum);
        }

        
    }
    
    int pickIndex() {
        
        int index = rand()%v.back();
        auto it = upper_bound(v.begin(), v.end(), index);
        return it - v.begin();
        
    }
};

int main(){
    vector<string> command = {"Solution","pickIndex","pickIndex","pickIndex","pickIndex","pickIndex"};
    vector<vector<int>> input = {{1,2,3,4},{},{},{},{},{}};
    Solution *obj = NULL;
    for(int i=0;i<command.size();i++){
        if(command[i]=="Solution")
            obj = new Solution(input[i]);
        else
            cout<<obj->pickIndex()<<endl;

            
    }

}
