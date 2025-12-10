#include <bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int k = i + 1; k < nums.size(); k++){
                if(nums[i] + nums[k] == target){
                    return {i, k};
                }
            }
        }
        return;
    }
};
*/

// using Hash table
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // 我們要找的另一個數字
            
            // 如果在 map 裡找到了這個 complement
            if (map.count(complement)) {
                // 回傳 {另一個數字的索引, 當前索引}
                return {map[complement], i};
            }
            
            // 沒找到的話，把當前的數字和索引存進 map，供後面的數字查找
            map[nums[i]] = i;
        }
        
        return {};
    }
};

int main(){

    return 0;
}