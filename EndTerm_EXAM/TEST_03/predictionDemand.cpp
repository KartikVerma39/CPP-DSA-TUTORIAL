
// Q2. Predicting Demand Drops in Inventory Management:


// Imagine you are an inventory manager at a warehouse that stores various products with fluctuating demand. You have a list of product
// demand levels recorded over several days, and you need to analyze market trends to optimize stock levels. For each day's demand, you
// want to determine when the demand will next decrease in the upcoming days.


// You have n days of demand data stored in an array demand[ ], where demand[i] represents the demand for a product on the i-th day. Your
// task is to find the next day (to the right) when the demand is lower than the current day's demand. If no such lower demand exists in the upcoming days, print -1 for that day.

// Input Format:

// --The first line of input contains a single integer T denoting the number of test cases.
// --Then T test cases follow:
// --The first line of each test case contains an integer n denoting the number of days.
// --The next line of each test case contains n distinct integers representing the demand levels for each day.

// Output Format:

// --For each test case, print the next smaller demand level for each day, separated by a space, in a new line. If no such smaller demand exists

// Sample Input:

// 1
// 5
// 40 80 50 20 90

// Sample Output:

// 20 50 20 -1 -1



// Solution Approach:


// void nse(int arr , int n){
//     stack<int>st;
//     for(int i =  n - 1 ; i >= 0 ; i--){
//         while(!st.empty() && st.top() >= arr[i]){
//             st.pop();
//         }
//         if(st.empty()){
//             arr[i] = -1;
//         }
//         else{
//             arr[i] = st.top();
//         }
//         st.push(arr[i]);
//     }
// }