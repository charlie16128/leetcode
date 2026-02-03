#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void backtrack(vector<int>& candidates, int target, int start, vector<int>& current, vector<vector<int>>& result){
        if(target == 0){
            result.push_back(current);
            return;
        }

        if(target < 0){
            return;
        }

        for(int i = start; i < candidates.size(); i++){
            current.push_back(candidates[i]);

            backtrack(candidates, target - candidates[i], i, current, result);

            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;

        backtrack(candidates, target, 0, current, result);

        return result;
    }
};

int main(){}
/*
candidates = [2,3,5], target = 8

2 -> 2 -> 2(i = 0) -> 2 (end:[2,2,2,2])
2 -> 2 (end:[2,2,2,3])
2 -> 2 -> 2(i = 2) -> 3 (end:[2,2,2,3])

*/