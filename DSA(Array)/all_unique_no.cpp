//Write a program to find the unique number in a given array where all the elements are being repeated twice with one value being unique
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,3,5,7,9,2,4,6,8,1,4,8,3,5,6};
    for(int i = 0;i < arr.size();i++){
        for(int j = i+1;j < arr.size();j++){
            if(arr[i] == arr[j]){
                arr[i] = arr[j] = -1;
            }
        }
    }
    cout<<"Elements are with unique value : ";
    for(int i = 0;i < arr.size();i++){
        if(arr[i] > 0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}