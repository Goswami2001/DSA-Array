//Write a C++ program to find all elements in array of integers which have at-least two greater elements
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    //Taking array element as a input
    for(int i = 0;i < size;i++){
        cout<<"Enter the array element : ";
        cin>>arr[i];
    }
    int item = 0;
    //Finding the element which meet the condition
    for(int i = 0;i < size;i++){
        //Condition check
        if(arr[i-1] > i && arr[i+1] > i){
            item = arr[i];
        }
    }
    cout<<"Element that meet the condition is : "<<item<<endl;
    return 0;
}