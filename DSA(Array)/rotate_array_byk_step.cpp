//Write a program to rotate an array by k times where k is non-negative number and also k can be equal to n here n is the size of the array
#include<iostream>
using namespace std;
int main(){
    int arr [] = {1,3,4,2,8,7};
    int size = sizeof(arr) / sizeof(arr[0]); 
    //For taking input of no. of times to rotate the array
    int k;
    cout<<"Enter the value of x : ";
    cin>>k;
    k = k % size;
    //Rotating
    //Printing the aray
    for(int i = 0;i < size;i++){
        if(i < k){
            cout<<arr[size + i - k]<<" ";
        }
        else{
            cout<<arr[ i - k]<<" ";
        }
    }
    cout<<endl;
    return 0;
}