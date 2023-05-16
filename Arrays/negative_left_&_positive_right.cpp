//Move all negative elements to the right of the array
#include<iostream>
using namespace std;

int main(){
    int k=0;
    int arr[8]={-9,7,23,-65,7,-2,70,-99};
    int arr1[8];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[k]);
            k++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}