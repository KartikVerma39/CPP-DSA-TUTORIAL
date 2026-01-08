
// Q3. Check the strength of virus Clone

// A virology student while studying the DNA of a corona virus found that, if a gene x and gene y in its DNA are separated by exactly 3 places anywhere, at least once, then it will be a strong virus. Consider the DNA as a string of characters, where each character denotes a gene.

// Now, given the DNA sequence of corona virus, check if its a strong virus or not.

// For example, if virus_DNA = "txma yert", then print YES because gene 'x' and gene 'y' are exactly 3 distance apart, therefore it is a strong virus.

// Note: The DNA genes are case sensitive.

// Input Format:

// The first line of input contains an integer T denoting the no of test cases. 
// The second line of input contains a string, denoting the DNA of the virus.

// Output Format:

// For each test case, print YES if the virus is strong, else print NO.

// Sample Input
// 3
// txma yert
// BMuxp ioqytB yxurN
// xaxoerylm

// Sample Output
// YES
// NO
// YES



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();   
    for(int i = 0 ; i < t ; i++){
        string s;
        getline(cin,s);
        int x = 0;
        int y = 0;
        bool flag = false;
        for(int i = 0 ; i + 4 < s.size() ; i++){
            if((s[i] == 'x' && s[i+4] == 'y') || (s[i] == 'y' && s[i+4] == 'x')){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}
