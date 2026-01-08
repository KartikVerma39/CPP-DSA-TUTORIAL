
// Q9. Decode Enemy Message:


// Turing intercepts an encoded message from the enemy country, and he has cracked the logic to decode that. The decoding logic is as follows:

// The encoded string is composed of multiple words which are separated by space, and to decode that, one needs to reverse the words in the string individually, not the whole string.

// Turing needs your help in writing an algorithm to decode those intercepted messages.

// Complete the function decodeMessage() which takes the string as parameter and reverse the individual words of string and returns it.


// Input Format:

// The first line of input contains an integer N denoting the no. of messages intercepted.
// Next N lines contain a message string each.


// Output Format:

// --For each message string, print its decoded version in a new line.


// Sample Input

// 2
// edoC tneitouQ sevoL edoC
// olleH sredoC

// Sample Output

// Code Quotient Loves Code
// Hello Coders


#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "edoC tneitouQ sevoL edoC";
    int start = 0;
    int end = s.size() - 1;
    for(int i = 0 ; i <= s.size() ; i++){
        if(s[i] == ' ' || i == s.size()){
            end = i - 1;
            while(start<end){
                swap(s[start],s[end]);
                start++;
                end--;
            }
            start = i + 1;
        }
    }
    cout<<s;
}