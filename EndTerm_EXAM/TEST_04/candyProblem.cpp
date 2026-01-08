

// Q9. Fair Distribution By Santa


// On the eve of Christmas, Santa distributed candies among N children. But soon after, Santa realized that he had not done the fair distribution. According to him, if the difference of candies between any two children is more than K, then the distribution is not fair. Therefore, he decided to take some candies back from the children.

// Now, given an array, denoting the initial number of candies given to each child, your task is to determine the minimum number of total candies that Santa has to take back, in order to achieve the fair distribution.

// For example, if N = 5, K = 3 and candies[N] = {5, 3, 6, 2, 8}, then we can clearly observe that - the difference of candies between (second and fifth) child, (third and fourth) child, and (fourth and fifth) child is greater than 3. Therefore, some candies need to be removed. So, if we remove 1 candy from the third child and 3 candies from the fifth child, then the distribution will become fair, i.e. {5, 3, 5, 2, 5}. So, in total, Santa has to take back a minimum of 4 candies from those children.

// Input Format:

// First Line will contain an integer N, denoting the number of children.
// Second line contains N space separated integers, denoting the initial number of candies given to each child.
// Third line contains an integer K.

// Constraints:

// 1 <= N <= 10^5
// 0 <= candies[i] <= 10^9
// 0 <= K <= 10^5

// Output Format:

// Print the minimum number of total candies that Santa has to take back, in order to achieve the fair distribution.

// Sample Input 1
// 5          // N
// 5 3 6 2 8  // candies[]
// 3          // K

// Sample Output 1
// 4

// Sample Input 2
// 4        // N
// 3 3 3 3  // candies[]
// 0        // K

// Sample Output 2
// 0

// Explanation


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {5,3,6,2,8};
    int k = 3;

    int maxC = -1;
    int minC = INT_FAST16_MAX;

    for(int i = 0 ; i < arr.size() ; i++){
        if(maxC < arr[i]){
            maxC = arr[i];
        }
        if(minC > arr[i]){
            minC = arr[i];
        }
    }
    int remove = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] > minC + k){
            remove += arr[i] - (k + minC);
        }
    }
    cout<<remove;
}