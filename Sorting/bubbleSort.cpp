// Bubble Sort


// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i = 0 ; i < size ; i++){
//         cin>>arr[i];
//     }

//     for(int i = size - 1 ; i >= 1 ; i--){
//         int didSwap = 0;
//         for(int j = 0 ; j<=i-1 ; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j] , arr[j+1]);
//                 didSwap = 1;
//             }
//         }
//         if(didSwap == 0){
//             break;
//         }
//     }


//     for(int i = 0 ;  i<size ; i++){
//         cout<<arr[i]<<" ";
//     }
// }




#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }

    for(int i = size - 1 ; i >= 1 ; i--){
        int check = 0;
        for(int j = 0 ; j <= i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                check = 1;
            }
        }
        if(check == 0){
            break;
        }
    }


    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}