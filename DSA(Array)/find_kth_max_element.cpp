#include <bits/stdc++.h>
using namespace std;


int find_max(int arr[],int n,int k){
    sort(arr,arr+n);
    return arr[n - k - 1];
}

int main(){
    int arr[] = {12,6,8,19,7,11};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    cout<<"Greatest element present in the array : "<<find_max(arr,size,k);
    return 0;
}