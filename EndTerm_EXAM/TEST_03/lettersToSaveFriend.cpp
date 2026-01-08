// Q7. Change the letters to save friend


// Your friend has an homework, in which he got some words and need to make the words fancy such that no adjacent characters in them
// matches. He is about to finish the work but his grandmother called him for some work. He need your help to figure out the minimum
// characters in each word to be replaced so that no adjacent characters will match. If you help him, he can finish the work early.

// So complete the function min_chars_change() which will receive a word as input and return an integer denoting the minimum
// characters need to be changed in that word.


// Input Format:

// --The first line contains an integer N i.e. number of words
// --Next N lines each contains an string i.e. word.

// Output Format:

// Print the minimum characters to be changed for each word in new lines.

// Constraints:

// 1 ≤ N ≤ 10
// 1 ≤ length of a word ≤ 10^5
// A word will only contain lowercase english alphabets i.e. from 'a' to 'z'. 



#include<iostream>
#include<vector>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    for(int i = 0 ; i < testcase ; i++){
        string s;
        cin>>s;
        int count = 0;
        for(int i = 0 ; i<s.size()-1 ; i++){
            if(s[i] == s[i+1]){
                count++;
                i++;
            }
        }
        cout<<count;
    }
}