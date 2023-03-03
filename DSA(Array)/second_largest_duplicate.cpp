//Write a program find the second largest element in the array when there is duplicate number
#include<iostream>
using namespace std;
int largest(int arr[],int size){
    int max = arr[0];
    int second_max = arr[0];
    int max_index = -1;
    int second_max_index = -1;
    for(int i = 0;i < size;i++){
        if(arr[i] > max){
            max = arr[i];
            max_index = i;
        }
        if(arr[i] > second_max && arr[i] != max){
            second_max = arr[i];
            second_max_index = i;
        }
    }
    return second_max;
}
int main(){
    int arr [] = {11,18,21,18,21,19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int second_largest = largest(arr,size);
    cout<<"Second largest element is : "<<second_largest<<endl;
    return 0;
}