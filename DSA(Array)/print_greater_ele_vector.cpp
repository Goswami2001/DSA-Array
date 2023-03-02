//Write a program to find out number which is greater than x using vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>arr(size);
    //Taking input of the array
    for(int i = 0;i < arr.size();i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
    //Printing the result of the array
    for(int i = 0;i < arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Element that is greater than x are : ";
    for(int i = 0;i < arr.size();i++){
        if(arr[i] > x){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}