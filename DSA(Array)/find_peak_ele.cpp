//This programming is for finding those element which is greater than it's adjacent value 

#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,5,6,7,0,2,1,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Elements which are gretaer than it's adjacent are : ";
    for(int i = 2;i<size-1;i++){
        int j = i-1;
        if(arr[j]<arr[i] && arr[i]>arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}