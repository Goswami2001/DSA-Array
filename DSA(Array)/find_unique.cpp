//Find unique no. present in the array
#include<bits/stdc++.h>
using namespace std;
void sorted_array(int arr[] , int size){
    sort(arr,arr+size);
    for(int i = 0;i < size;i++){
        if(arr[i] == arr[i+1]){
            continue;;
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
    return;
}
int main(){
    int arr[] = {1,1,11,1,1,1,1,1,1};
    int size = sizeof(arr)  /sizeof(arr[0]);
    cout<<"Elements with unique no. is : ";
    sorted_array(arr,size);
}