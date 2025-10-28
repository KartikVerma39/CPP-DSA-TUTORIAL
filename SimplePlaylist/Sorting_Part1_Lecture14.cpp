// Selection Sort

// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i = 0 ; i<size ; i++){
//         cin>>arr[i];
//     }

//     for(int i = 0 ; i<=size - 2 ; i++){
//         int min = i;
//         for(int j = i ; j<=size-1 ; j++){
//             if(arr[j] < arr[min]){
//                 min = j;
//             }
//         }   
//         int temp = arr[min];
//         arr[min] = arr[i];
//         arr[i] = temp;
//     }


//     for(int i = 0 ; i<size ; i++){
//         cout<<arr[i]<<" ";
//     }
// }




// Bubble Sort



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0 ; i<n ; i++){
//         cin>>arr[i];
//     }

//     for(int j = 0 ; j<n ; j++){ 
//         int didSwap = 0;
//         for(int i = 0 ; i<n-j-1 ; i++){
//             if(arr[i] > arr[i+1]){
//                 int temp = arr[i];
//                 arr[i] = arr[i+1];
//                 arr[i+1] = temp;
//                 didSwap = 1;
//             }
//         }
//         if(didSwap == 0){
//             break;
//         }
//     }
   
//     for(int i = 0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }

// }


// Insertion Sort


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0 ; i<n ; i++){
//         cin>>arr[i];
//     }


//     for(int i = 1 ; i<=n-1; i++){
//         int j = i;
//         while(j>0 && arr[j-1] > arr[j]){
//             int temp = arr[j-1];
//             arr[j-1] = arr[j];
//             arr[j] = temp;
//             j--; 
//         }
//     }

//     for(int j = 0 ; j<n ; j++){
//         cout<<arr[j]<<" ";
//     }
// }