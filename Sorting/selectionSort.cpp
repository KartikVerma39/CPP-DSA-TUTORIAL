// Selection Sort


#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }

    for(int i = 0 ; i<=size-2 ; i++){
        int minIndex = i;
        for(int j = i ; j<=size-1 ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
    }


    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}