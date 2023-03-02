//C++ Program to enter 5 numbers & display first and last only
#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int arr [5];
    for(int i = 0;i < size;i++){
        cout<<"Enter the elements of the array : ";
        cin>>arr[i];
    }
    cout<<"Elements are "<<arr[0]<<" and "<<arr[size - 1]<<endl;
    return 0;
}