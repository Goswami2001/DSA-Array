//Write a program in c++ to print the duplicate numbers
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    //Taking array element as a input
    for(int i = 0;i < size;i++){
        cout<<"Enter the array element : ";
        cin>>arr[i];
    }
    //Printing the array
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i < size;i++){
        for(int j = i+1;j < size;j++){
            if(arr[i] == arr[j]){
                cout<<"Duplicate element : "<<arr[i]<<" ";
            }
        }
    }
    return 0;
}