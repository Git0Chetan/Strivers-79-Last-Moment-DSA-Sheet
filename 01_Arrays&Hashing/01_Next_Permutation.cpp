// next_permutation : find next lexicographically greater permutation
// Problem Statement: Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.
// If such an arrangement is not possible, it must rearrange to the lowest possible order (i.e., sorted in ascending order)

//Leetcode:31  link:https://leetcode.com/problems/next-permutation/
//GFG: https://practice.geeksforgeeks.org/problems/next-permutation5226/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab




#include<iostream>
using namespace std;


//TIme complexity n.
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int b=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                b=i;
                break;
            }
        }
        if(b==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
      

        for(int j=n-1;j>b;j--){
            if(nums[j]>nums[b]){
                int temp=nums[j];
                nums[j]=nums[b];
                nums[b]=temp;
                break;
            }
        }

        reverse(nums.begin()+b+1,nums.end());
    }
};




//Using STL 
// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         next_permutation(nums.begin(),nums.end());
//     }
// };




// time complexity n!*n
// class Solution {
// public:
//     vector<vector<int>>v1;
//     void permi(vector<int>v,int l,int r){
//         if(l==r){
//             v1.push_back(v);
//             return;
//         }

//         for(int i=l;i<v.size();i++){
//             int temp=v[i];
//             v[i]=v[l];
//             v[l]=temp;
//             permi(v,l+1,r);
//             temp=v[i];
//             v[i]=v[l];
//             v[l]=temp;
//         }
//     }
//     void nextPermutation(vector<int>& nums) {
//         int l=0;
//         int r=nums.size()-1;
//         permi(nums,l,r);
        
//         for(int i=0;i<v1.size();i++){
//             if(v1[i]==nums){
//                 if(i<v1.size()-1){
//                     nums=v1[i+1];
//                 }
//                 else{
//                     nums=v1[0];
//                 }
                
//             }
//         }
//     }
// };