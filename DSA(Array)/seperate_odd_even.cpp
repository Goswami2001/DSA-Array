//Write a C++ program to separate even and odd numbers of an array of integers. Put all even numbers first, and then odd numbers
#include<iostream>
using namespace std;

//Function 
void swap(int arr[],int size){
    //Applying quick sort algorithm
    int j = -1;
    for(int i=0;i<size;i++){
        if(arr[i] % 2 == 0){
            j++;
            swap(arr[i],arr[j]);
        }
    }
}
int main(){
    int arr[] = {13,8,10,21,7,3,2};
    //Calculating the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Before sorting : ";
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Calling the function
    swap(arr,size);
    //Printing desired output
    cout<<"After sorting : ";
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}