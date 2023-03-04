//Write a C++ program to print all negative elements in an array
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr [size];
    //Taking input element for the array
    for(int i = 0;i < size;i++){
        cout<<"Enter array element : ";
        cin>>arr[i];
    }
    //Printing the whole array
    cout<<"Printing whole array : ";
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing only negative element : ";
    //Print all negative elements in an array
    for(int i = 0;i < size;i++){
        if(arr[i] < 0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}