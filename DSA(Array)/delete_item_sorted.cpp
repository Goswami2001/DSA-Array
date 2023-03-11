// Write a c++ program to delete an element from the array  
#include<iostream>
using namespace std;
//Creating the function
int deleting(int arr[],int size,int x){
    int i;
    //Searching
    for(i = 0;i < size;i++){ //Linear Search
        if(arr[i] == x){
            break;
        }
    }
    //Traversing & Deleting Element
    if(i < size){
        size = size - 1;
        for(int j = i;j < size;j++){
            arr[j] = arr[j+1];
        }
    }
    //Return the size
    return size;
}
int main(){
    int arr[] ={12,17,22,29,33,39,41,45,49};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout<<"Enter the element you want to delete : ";
    cin>>x;
    //Calling the function
    size = deleting(arr,size,x);
    //Printing the array
    cout<<"Modified array : ";
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
