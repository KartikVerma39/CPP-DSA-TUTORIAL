// NUMBER HASHING

// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i = 0 ; i<size ; i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     int arr2[13] = {0};

//     for(int i = 0 ; i<size ; i++){
//         arr2[arr[i]]++; 
//     }

//     cout<<arr2[target];

// }



// CHARACTER HASHING


// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int hash[256] = {0};
//     char target;
//     cin>>target;
//     for(int i = 0 ; i<s.length() ; i++){
//         hash[s[i]]++;
//     }

//     cout<<hash[target];
// }




// MAP
//  It stores all value in sorted order


// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     map<int,int>mpp;
//     for(int i = 0 ; i<n ; i++){
//         mpp[arr[i]]++;
//     }
//     int target;
//     cin>>target;
//     cout<<mpp[target];
// }  



// NUMBER WITH MIN AND MAX FREQUENCY



// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     map<int,int>ans;
//     for(int i = 0 ; i<size ; i++){
//         cin>>arr[i];
//     }

//     for(int i = 0 ; i<size ; i++){
//         ans[arr[i]]++;
//     }

//     int high_freq = 0;
//     int less_freq = INT16_MAX;
//     int num_with_max_freq, num_with_min_freq;


//     for(auto it : ans){
//         if(it.second > high_freq){
//             high_freq = it.second;
//             num_with_max_freq = it.first;

//         }
//          if (it.second < less_freq) {
//             less_freq = it.second;
//             num_with_min_freq = it.first;
//         }
//     }


//         cout << "Number with max frequency: " << num_with_max_freq << " (appears " << high_freq << " times)" << endl;
//     cout << "Number with min frequency: " << num_with_min_freq << " (appears " << less_freq << " times)" << endl;
// }