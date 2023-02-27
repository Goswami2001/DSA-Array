//Write a program in C++ to calculate the sum of all even and odd numbers in an array
#include<iostream>
using namespace std;
int main(){
    int arr[] = {6,3,9,11,4,8,10,7,5,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum_odd = 0,sum_even = 0;
    for(int i=0;i<size;i++){
        if(arr[i] % 2 == 0){
            sum_even +=arr[i];
        }
        else{
            sum_odd +=arr[i];
        }
    }
    cout<<"Sum of odd numbers in the array : "<<sum_odd<<endl;
    cout<<"Sum of even numbers in the array : "<<sum_even<<endl;
    return 0;
}