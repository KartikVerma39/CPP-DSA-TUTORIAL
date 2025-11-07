// First Unique Character


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "codequotientchamp";
//     unordered_map<char,int>mp;
//     for(auto it:s){
//         mp[it]++;
//     }

//      for(int i  = 0 ; i <s.size() ; i++){
//         if(mp[s[i]] == 1){
//             cout<<i;
//             return 0;
//         }
//      } 
// }



// Find out the winner


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<string>arr = {"Amit","Girdhar","Amit","Girdhar","Girdhar","Amit"};
//     unordered_map<string,int>mp;
//     sort(arr.begin() , arr.end() , greater<string>());
    
//     string ans = arr[0];
//     int freq = 0;
//     for(auto it:arr){
//         mp[it]++;
//         if(mp[it] > freq){
//             freq = mp[it];
//             ans = it;
//         }
//     }
//     cout<<ans;
// }




// First Unique Character bookmark_border


// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     string s = "codequotientchamp";
//     unordered_map<char,int>mp;
//     for(auto it:s){
//         mp[it]++;
//     }

//     for(int i = 0 ; i<s.size() ; i++){
//         if(mp[s[i]] == 1){
//             cout<<i;
//             break;
//         }
//     }
// }




// Find out the winner 

// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<string>arr = {"Amit","Girdhar","Amit","Girdhar","Girdhar","Amit"};
//     sort(arr.begin() , arr.end() , greater<string>());

//     unordered_map<string,int>mp;
//     for(auto it:arr){+
//         mp[it]++;
//     }


//     int freq = 0;
//     string ans = "";
//     for(int i = 0 ; i < arr.size() ; i++){
//         if(mp[arr[i]] > freq){
//             freq = mp[arr[i]];
//             ans = arr[i];
//         }
//     }
//     cout<<ans;
// }



// Unique characters or not 


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[256] = {0};
//     string s = "CodeQuotient";
//     for(auto it:s){
//         if(arr[(unsigned char)it] == 1){
//             cout<<"False";
//             return 0;
//         }
//         else{
//             arr[(unsigned char)it] = 1;
//         }
//     }
//     cout<<"True";
// }


// Count frequency of each character


// #include<iostream>
// using namespace std;
// int main(){
//     string s = "codequotient";
    // int arr[26] = {0};
    // for(auto it:s){
    //     arr[it - 'a']++;
    // }

    // for(int i = 0 ; i < s.size() ; i++){
    //     if(arr[s[i] - 'a'] > 0){
    //     cout<<s[i]<<arr[s[i] - 'a']<<" ";
    //     arr[s[i] - 'a'] = 0;    
    // }   
    // }
// }


// Kth distinct element

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>arr = {6,11,4,11,9,4};
    // int k = 2;
    // int freq[10001] = {0};
    // for(auto it : arr){
    //     freq[it]++;
    // }

    // int count = 0;
    // for(int i = 0 ; i <arr.size() ; i++){
    //     if(freq[arr[i]] == 1){
    //         count++;
    //     }
    //     if(k == count){
    //         cout<<arr[i];
    //         return 0;
    //     }
    // }
// }



// Maximum Frequency in a sequence

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {2,4,5,2,3,2,4};
//     int size = 7;
    // int freq[100001] = {0};

    // for(auto it:arr){
    //     freq[it]++;
    // }


    // int large = 0;
    // int ans = arr[0];
    // for(int i = 0 ; i<size ; i++){
    //     if(freq[arr[i]] > large){
    //         large = freq[arr[i]];
    //         ans = arr[i];
    //     }
    //     else if(large == freq[arr[i]] && arr[i]<ans){
    //         ans = arr[i];
    //     }
    // }
    // cout<<ans;
// }



// Check if two arrays are equal or not 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>A = {11,12,13};
    vector<int>B = {12,11,13};
    if(A.size() != B.size()){
        cout<<"False";
        return 0;
    }
    sort(A.begin() , A.end());
    sort(B.begin() , B.end());

    for(int i = 0 ; i < A.size() ; i++){
        if(A[i] != B[i]){
            cout<<"False";
            return 0;
        }
    }
    cout<<"True";
    return 0;
}