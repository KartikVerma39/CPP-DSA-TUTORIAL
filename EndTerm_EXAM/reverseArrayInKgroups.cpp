// Q1. Family Photograph:

// N members of a family are lined up in the increasing order of their heights for a family photograph. But to click a better snap, the photographer decided to reverse their positions in the groups of k members each.

// Given an array and an integer k, where each array element denotes the height of a person standing at the respective position originally. Your task is to print their heights according to their final position, after reversing in the groups of k.

// For example, If the height's array is {1, 2, 3, 4, 5, 6, 7, 8, 9}, i.e. denoting the original positions of the family members, and k = 3, then their final positions should be {3, 2, 1, 6, 5, 4, 9, 8, 7}, i.e. after reversing them in the groups of 3 members each.

// Note: The last group on the right side may contain less than k members.




#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,9};
    int n = arr.size();
    int k = 3;
    for(int i = 0 ; i < arr.size() ; i+=k){
        int end = min(i + k - 1,n - 1);
        reverse(arr.begin() + i , arr.begin() + end + 1);
    }


    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}





