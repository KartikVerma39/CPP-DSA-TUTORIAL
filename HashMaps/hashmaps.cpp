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