// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

//Leetcode:229 link : https://leetcode.com/problems/majority-element-ii/
//GFG : https://practice.geeksforgeeks.org/problems/count-element-occurences/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab


//Leetcode:
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        int m=n/3;

        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto a:mp){
            if(a.second>m)res.push_back(a.first);
        }

        return res;
    }
};

// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {

//         //brute force approach
//         //time limit exceed
//         // set<int>v;
//         // for(int i=0;i<nums.size();i++){
//         //     int count=0;
//         //     for(int j=0;j<nums.size();j++){
//         //         if(nums[i]==nums[j]){
//         //             count++;
//         //         }
//         //     }

//         //     if(count>(nums.size()/3)){
//         //         v.insert(nums[i]);
//         //     }
//         // }
//         // vector<int>v1;
//         // for(auto a:v){
//         //     v1.push_back(a);
//         // }

//         // return v1;



//         //Better Approach
//         //using map and vector
//         // vector<int>v;
//         // map<int,int>m;
//         // int n=nums.size();
//         // int r=int(n/3)+1;
//         // for(int i=0;i<n;i++){
//         //     m[nums[i]]++;
//         //     if(m[nums[i]]==r){
//         //         v.push_back(nums[i]);
//         //     }
//         // }
//         // return v;



//         //optimised solution:
//         vector<int>v;
//         int ele1=INT_MIN;
//         int ele2=INT_MIN;
//         int c1=0;
//         int c2=0;
//         for(int i=0;i<nums.size();i++){
//             if(c1==0 && ele2!=nums[i]){
//                 c1=1;
//                 ele1=nums[i];
//             }
//             else if(c2==0 && ele1!=nums[i]){
//                 c2=1;
//                 ele2=nums[i];
//             }
//             else if(nums[i]==ele1){
//                 c1++;
//             }
//             else if(nums[i]==ele2){
//                 c2++;
//             }
//             else{
//                 c1--;
//                 c2--;
//             }
//         }
        
//         int col1=0;
//         int col2=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==ele1){col1++;}
//             else if(nums[i]==ele2){col2++;}
//         }

//         if(col1>=(nums.size()/3)+1){v.push_back(ele1);}
//         if(col2>=(nums.size()/3)+1){v.push_back(ele2);}
//         sort(v.begin(),v.end());
//         return v;
//     }
// };








//GFG
//{ Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        k=n/k;
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        int count=0;
        for(auto a:mp){
            if(a.second>k)count++;
        }
        
        return count;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        int k;
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends