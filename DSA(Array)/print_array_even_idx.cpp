// Write a c++ program to print all the values that are present in even index only
#include<iostream>
using namespace std;
void print(int arr[],int size){
    for(int i = 0 ; i < size;i++){
        if(arr[i] % 2 == 0){
            cout<<i<<" ";
        }
    }
    return;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"All the values that are present in even index only are : ";
    print(arr,size);
    return 0;
}