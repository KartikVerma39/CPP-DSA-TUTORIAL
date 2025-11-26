// Insertion Sort



// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i = 0 ; i < size ; i++){
//         cin>>arr[i];
//     }

//     for(int i = 1 ; i <= size - 1; i++){
//         int j = i;
//         while(j>0 && arr[j-1] > arr[j]){
//             swap(arr[j] , arr[j-1]);
//             j--;
//         }
//     }

//     for(int i = 0 ; i < size ; i++){
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

    for(int i = 1 ; i <= size - 1 ; i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j] , arr[j-1]);
            j--;
        }
    }


    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }

}