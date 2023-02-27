

#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    for(int i = 0;i<size;i++){
        cout<<"Enter the elements of the array : ";
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum += arr[i];
    }
    cout<<"Total sum of the array will be : "<<sum;
    return 0;
}