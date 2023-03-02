//Write a program to find out total number which is greater than x using vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>arr(size);
    for(int i = 0;i < arr.size();i++){
        cout<<"Enter element of the array : ";
        cin>>arr[i];
    }
    for(int i = 0;i < arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x,count = 0;
    cout<<"Enter the value of x : ";
    cin>>x;
    for(int i = 0;i < arr.size();i++){
        if(arr[i] > x){
            count++;
        }
    }
    cout<<"Total number which is greater than x is : "<<count<<endl;
    return 0;
}