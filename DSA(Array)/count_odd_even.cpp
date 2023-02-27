//This program is for finding the total no. of odd number and even number is present in the array

#include<iostream>
using namespace std;

void count_odd_even(int arr[],int n){
    int odd_count = 0;  //For counting total number of odd number
    int even_count = 0; //For counting total number of even number
    for(int i = 0;i<n;i++){
        if(arr[i] % 2 == 0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    cout<<"Total odd number present in the given array : "<<odd_count<<endl;
    cout<<"Total even number present in the given array : "<<even_count<<endl;
    return;
}

int main(){
    int arr[] = {3,7,11,54,34,63,52,23};
    int size = sizeof(arr) / sizeof(arr[0]);
    count_odd_even(arr,size);
    return 0;
}