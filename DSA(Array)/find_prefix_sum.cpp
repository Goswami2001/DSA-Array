//Write a program to find out prefix sum
#include<iostream>
using namespace std;

//Creating function which calculate prefix sum
void find_sum(int arr[],int size){
    for(int i = 1;i < size;i++){
        arr[i] += arr[i-1];
    }
    return;
}
int main(){
    int arr[7];
    int size = sizeof(arr) / sizeof(arr[0]);
    //taking input
    for(int i = 0;i < 7;i++){
        cout<<"Enter array element : ";
        cin>>arr[i];
    }
    //Calling the function
    find_sum(arr,size);
    // Printing the output 
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}