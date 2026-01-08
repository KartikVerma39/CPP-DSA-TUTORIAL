// Q4. Cinema Seat Booking System:


// A cinema hall has its seating arrangement represented as a 2D array of size R × C (rows × columns).

// --Each element in the array represents a seat:

// 0 → Empty seat
// 1 → Booked seat

// --A group of friends wants to book K consecutive seats in the same row.

// --Write a program to find if there exists at least one block of K consecutive empty seats in any row.

// Input Format:

// --Read two integers R and C (rows and columns).
// --Read RxC inputs (which will be array elements i.e either 0 or 1 )
// --Read the value of K (the group size).

// Output Format:

// --Either print the row and starting column of the available seats as:
// --Available at Row X, Starting Column Y
// --Or, if no K consecutive sheets are available then print:

// Not Available

// Sample Input 1:

// 5 6              <-- 5 rows, 6 columns
// 0 1 0 0 0 1      <-- row 1
// 0 0 1 0 1 0      <-- row 2
// 1 1 1 1 0 0      <-- row 3
// 0 1 0 0 1 0      <-- row 4
// 1 0 1 0 1 0      <-- row 5
// 3                <-- group size (number of seats to be booked)

// Sample Output 1

// Available at Row 1, Starting Column 3


// Sample Input 2:

// 3 5
// 1 1 1 1 1
// 0 1 0 1 0
// 1 1 1 0 1
// 2

// Sample Output 2:

// Not Available



// Solution approach:
// ------------------

// Given an R × C seating matrix:

// 0 → empty

// 1 → booked

// You must find if any row contains K consecutive empty seats.

// If yes → print:

// Available at Row X, Starting Column Y

// If not → print:

// Not Available



#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row;
    int col;
    cin>>row>>col;
    int arr[row][col];

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cin>>arr[i][j];
        }
    }

    int k;
    cin>>k;

    for(int i = 0 ; i < row ; i++){
        int count = 0;
        for(int j = 0 ; j < col ; j++){
            if(arr[i][j] == 0){
                count++;
            }
            else{
                count = 0;
            }
            if(count == k){
                return true;
            }
        }
        
    }
    return false;
}
