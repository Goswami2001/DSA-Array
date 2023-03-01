//Write a C++ program to find the smallest element missing in a sorted array.
#include<iostream>
#include<algorithm>
using namespace std;
int missing(int arr[],int left,int right){
    if(left > right){
        return right+1;
    }
    if(left != arr[left]){
        return left;
    }
    int mid = (left + right) / 2;
    if(arr[mid] == mid){
        return missing(arr,mid+1,right);
    } 
    return missing(arr,left,mid);
}
int main(){
    int arr[] = {0,1,3,5,6,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"The array : ";
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    missing(arr,0,size-1);
    cout<<endl;
    cout<<"In the array smallest element that is misssing : "<<missing(arr,0,size - 1)<<endl;
    return 0;
}