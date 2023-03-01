//Write a C++ program to find the largest three elements in an array
#include<bits/stdc++.h>
using namespace std;
//function for getting sorted array
void sorting(int arr[],int size){
    sort(arr,arr+size);
    return;
}
int main(){
    int arr [] = {13,4,5,9,12,65,24,11};
    //Calculating the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    //Calling the function
    sorting(arr,size);
    int max,second_max,third_max;
    for(int i = 0;i<size;i++){
        max = arr[i];
    }
    for(int i = 0;i<(size-1);i++){
        second_max = arr[i];
    }
    for(int i = 0;i<(size-2);i++){
        third_max = arr[i];
    }
    cout<<"Maximum element is : "<<max<<" second maximum element is : "<<second_max<<" and third maximum element is : "<<third_max;
    return 0;
}