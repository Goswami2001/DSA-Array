//Write a program to find the average of all the array element
#include<iostream>
using namespace std;
int main(){
    int size,avg = 0;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    //Taking input element of the array
    for(int i = 0;i < size;i++){
        cout<<"Enter the size of the array : ";
        cin>>arr[i];
    }
    //Printing the output
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Result
    for(int i = 0;i < size;i++){
        avg += arr[i];
    }
    cout<<"Average of the array element is : "<<avg<<endl;
    return 0;
}