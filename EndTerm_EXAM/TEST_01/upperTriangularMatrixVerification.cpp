// Q3. Upper Triangular Matrix Verification


// Imagine you are a Quality Control (QC) Inspector at a factory that produces specialized mathematical objects called Square Matrices.

// Your current job is to take a batch of these matrices and check if they meet a specific design requirement: Are they an Upper Triangular Matrix?

// The Rule for an Upper Triangular Matrix

// --For a matrix to be approved as "Upper Triangular," every single component (element) that is located below the main diagonal must be a zero (0).

// --The main diagonal runs from the top-left corner down to the bottom-right corner.

// Your Task as the QC Inspector:

// --Display the Matrix: First, you must clearly present the contents of the matrix you are inspecting so everyone can see it.

// --Give the Verdict: After checking all the elements below the main diagonal against the rule (must be zero), you must then display a final, clear message stating:

// --"not an upper triangular matrix" OR
// --"upper triangular matrix"

// Constraints :

// 2<n<=5 //order of matrix


// Sample Input :

// 3 //order of matrix
// 1 2 3
// 4 5 6
// 7 8 9

// Sample Output :

// 1 2 3
// 4 5 6
// 7 8 9

// not an upper triangular matrix

// Explanation :

// 1 2 3
// 4 5 6
// 7 8 9

// are the contents of array
// not an upper triangular matrix is displayed as elements below diagonal are not zero

// Sample Input :

// 3
// 1 2 3
// 0 5 6
// 0 0 9

// Sample Output :

// 1 2 3
// 0 5 6
// 0 0 9

// upper triangular matrix



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size][size];
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;


    bool flag = true; 
    for(int i = 1 ; i < size ; i++){
        for(int j = 0 ; j < i ; j++){
            if(arr[i][j] != 0){
                flag = false;
            }
        }
    }

    if(flag){
        cout<<"upper triangular matrix";
    }
    else{
        cout<<"not an upper triangular matrix";
    }
}