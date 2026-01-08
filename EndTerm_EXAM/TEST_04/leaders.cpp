// Q5. Count the leaders in a company

// An IT company is developing some complex software, and to successfully deliver it on time, they want to constitute a new team of leaders. Given an array, that contains the employee IDs in some particular order. Your task is to find, the total number of leaders in that IT company. An employee is called a leader if its ID is greater than all the employee IDs to its right side, in the given array. Note that the employee at the rightmost position in the array is always a leader.

// For example, in the array {12, 27, 14, 11, 25, 6, 7}, there are 3 leaders with the following employee IDs: 27, 25 and 7.

// Complete the function countTheLeaders() that accepts the array as input and returns the count of leaders in it.

// Input Format

// First Line will contain an integer N, denoting the number of employees in the company.
// Second line contains N integers separated by space, denoting the employee IDs.

// Output Format

// Print the number of leaders in that IT company.

// Constraints

// 1 <= N <= 10^5
// 1 <= EmpIDs[i] <= 10^9
// All the employee Ids will be unique

// Sample Input

// 7
// 12 27 14 11 25 6 7


// #include <iostream>
// using namespace std;

// int countTheLeaders(int arr[], int n) {
//     int count = 1;                 // last element is always leader
//     int maxRight = arr[n - 1];

//     for (int i = n - 2; i >= 0; i--) {
//         if (arr[i] > maxRight) {
//             count++;
//             maxRight = arr[i];
//         }
//     }

//     return count;
// }
