#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string countAndSay(int n){
        string ans = "1";

        for(int i = 1; i < n; i++){
            ans = RLE(ans);
        }

        return ans;
    }

private:
    string RLE(const string &s){
        string result = "";
        int count = 1;

        for(int i = 1; i < s.length(); i++){
            if(s[i] == s[i - 1]){
                count++;
            }else{
                result += to_string(count) + s[i - 1];
                count = 1;
            }
        }

        result += to_string(count) + s.back();
        
        return result;
    }
};


    

int main(){}

// 1
// 11
// 21
// 1211
// 111221
// 312211
