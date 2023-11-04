// Kadane’s Algorithm : Maximum Subarray Sum in an Array
// Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) 
// which has the largest sum and returns its sum and prints the subarray.

//Leetcode:53 link:https://leetcode.com/problems/maximum-subarray/description/
//GFG: https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab



//{ Driver Code Starts
#include<iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long maximum=LONG_MIN;
        long long sum=0;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            maximum=max(maximum,sum);
            
            if(sum<0){
                sum=0;
            }
        }
        return maximum;
    }
};

//Time complexity O(n2)
// long long maxSubarraySum(int arr[], int n){
//         int maxi=INT_MIN;
//         for(int i=0;i<n;i++){
//             int sum=0;
//             for(int j=i;j<n;j++){
//                 sum+=arr[j];
//                 maxi=max(sum,maxi);
//             }
//         }
//         return maxi;
//     }


//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code 