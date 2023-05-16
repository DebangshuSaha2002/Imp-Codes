//merge 2 sorted arrays in cpp
#include<iostream>
using namespace std;

void merge_sorted(int arr1[],int n,int arr2[],int m,int *arr3){
    int index1=0;
    int index2=0;
    int k=0;
    while(index1<n && index2<m){
        if(arr1[index1]<arr2[index2]){
            arr3[k++]=arr1[index1];
            index1++;
        }
        else if (arr2[index2]<arr1[index1]){
            arr3[k++]=arr2[index2];
            index2++;
        }
    }

    while(index1!=n){
        arr3[k++]=arr1[index1++];
    }
    while(index2!=m){
        arr3[k++]=arr2[index2++];
    }
}

int main(){
    int arr1[4]={6,9,11,12};
    int arr2[5]={2,7,10,13,14};
    int arr3[9];
    merge_sorted(arr1,4,arr2,5,arr3);
    for(int i=0;i<9;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}