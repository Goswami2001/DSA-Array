//Find the kth smallest element present in the given array

#include <bits/stdc++.h>
using namespace std;

//Program to sort the array first and then fing the kth position element
int find_min(int arr[],int n,int k){
    sort(arr,arr + n);
    return arr[k];
}

int main(){
    int arr[] = {10,4,15,21,89};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    cout<<"Smallest element present in kth position : "<<find_min(arr,size,k);
}