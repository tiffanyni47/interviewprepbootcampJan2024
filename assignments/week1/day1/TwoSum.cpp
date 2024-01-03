/*
Name: Tiffany Ni
Technical Interview prep Winter 2024 Day 2
Classwork: Leet code question Two Sum
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> solution;
        for(int i = 0; i < nums.size(); i++){
            for(int j = nums.size()-1; j > i; j--){
                if(nums[i] + nums[j] == target){
                    solution.push_back(i);
                    solution.push_back(j);
                    break;
                }
            }
        }
        return solution;
    }
};
