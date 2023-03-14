//Write a program to check if elements of an array are same or not it read from front or back. E.g.-
//2	3	15	15	3	2
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    for(int i = 0;i < size;i++){
        cout<<"Enter array elements : ";
        cin>>arr[i];
    }
    cout<<"Printing the array : ";
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i = 0;
    int j = size - 1;
    bool result = false;
    for(int i = 0;i < size;i++){
        if(arr[i] != arr[j]){
            result = false;
        }
        else{
            result = true;
            j--;
        }
    }
    if(result == 1){
        cout<<"They are same";
    }
    else{
        cout<<"They are not same";
    }
    return 0;
}
