//Write a program to find out Target sum [no. of times element of the arry is equal to x]
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>arr(size);
    //Taking input of array's element
    for(int i = 0;i < arr.size();i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
    //Printing the result
    for(int i = 0;i < arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x,count = 0;
    cout<<"Enter the value of the x : ";
    cin>>x;
    for(int i = 0;i < arr.size();i++){
        for(int j = (i+1);j < arr.size();j++){
            if(arr[i] + arr[j] == x){
                count++;
            }
        }
    }

    cout<<"Total targeted sum find in the array : "<<count<<endl;
    return 0;
}