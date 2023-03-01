//Write a C++ program to find the largest three elements in an array
#include <bits/stdc++.h>
using namespace std;
int sorting(int arr[],int size){
    //Sorting the array
    sort(arr,arr+size);
    //Finding (size - 2)th element as we know second largest value will be find there in the sorted array
    int p = arr[size - 2];
    return p;
}
int main(){
    int arr[] = {13,6,19,17,3,8,33};
    //Calculating the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    //Calling and printing the resultent output
    cout<<"Second largest element is : "<<sorting(arr,size);
    return 0;
}