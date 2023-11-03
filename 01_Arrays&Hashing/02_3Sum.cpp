// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] 
// such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
// Notice that the solution set must not contain duplicate triplets.

//Leetcode:15  link: https://leetcode.com/problems/3sum/description/
// gfg: https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1
// gfg: https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

#include<iostream>
using namespace std;


//using two pointer
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){continue;}
            int low=i+1;
            int high=nums.size()-1;
            while(low<high){
                int sum=nums[i]+nums[low]+nums[high];
                if(sum<0){
                    low++;
                }
                else if(sum>0){
                    high--;
                }
                else{
                    vector<int>v={nums[i],nums[low],nums[high]};
                    ans.push_back(v);
                    low++;
                    high--;
                    while(low<nums.size() && nums[low]==nums[low-1]){low++;}
                    while(high>0 && nums[high]==nums[high+1]){high--;}
                }
            }
        }
        return ans;
    }
};


//Brute force approach
//It will lead to time limit exception
// class Solution {
// public:
    // vector<vector<int>> threeSum(vector<int>& nums) {
        // set<vector<int>>ss;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             if(nums[i]+nums[j]+nums[k]==0){
        //                 vector<int>temp={nums[i],nums[j],nums[k]};
        //                 sort(temp.begin(),temp.end());
        //                 ss.insert(temp);
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>>ans(ss.begin(),ss.end());
        // return ans;



        //using O(n^2)
        //it can also leed to time complexity
        // set<vector<int>>ss;
        // for(int i=0;i<nums.size();i++){
        //     set<int>v;
        //     for(int j=i+1;j<nums.size();j++){
        //         int num=-(nums[i]+nums[j]);
        //         if(v.find(num)!=v.end()){
        //             vector<int>te={nums[i],nums[j],num};
        //             sort(te.begin(),te.end());
        //             ss.insert(te);
        //         }
        //         else{
        //             v.insert(nums[j]);
        //         }
        //     }
        // }
        // vector<vector<int>>ans(ss.begin(),ss.end());
        // return ans;
    // }
// };