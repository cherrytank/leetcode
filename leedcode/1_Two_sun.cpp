#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int> & nums, int target) {
        unordered_map<int,int> map;
         vector<int> result;
        for(int i =0;i < nums.size();i++){
            int cmp = target-nums[i];
            if(map.find(cmp) != map.end()){
                result.push_back(map[cmp]);
                result.push_back(i);
                break;
            }
            map[nums[i]]=i;
        }
        return result;
    }
};



int main(){
    Solution so = Solution();
    vector<int> arr = {2,7,11,15}; 
    int tar = 9;
    
}