//Write a C++ program to find all elements in array of integers which have at-least two greater elements
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the maximum size of the array : ";
    cin>>size;
    int arr[size];
    for(int i = 0;i < size;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
    int max_count = 0;
    for(int i = 0;i < size;i++){
        int count = 1;
        for(int j = 1;j < size;j++){
            if(arr[i] == arr[j]){
                count++;
            }
            if(count > max_count){
                max_count = arr[i];
            }
        }
        
    }
    cout<<"Max occurence occured : "<<max_count<<endl;
    return 0;
}