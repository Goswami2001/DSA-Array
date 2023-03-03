//Write a  program to count number of triplets whose value is equal to x
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr(10);
    //Taking input
    for(int i = 0;i < 10;i++){
        cout<<"Enter array element : ";
        cin>>arr[i];
    }
    //Printing array
    for(int i = 0;i < 10;i++){
        cout<<arr[i]<<" ";
    }
    int x,count = 0;
    cout<<"Enter the value of x : ";
    cin>>x;
    for(int i = 0;i < arr.size();i++){
        for(int j = i+1;j < arr.size();j++){
            for(int k = j+1;j < arr.size();k++){
                if(arr[i] + arr[j] + arr[k] == x){
                    count++;
                }
            }
        }
    }
    cout<<"Total number of triplets whose value is equal to x : "<<count<<"x times"<<endl;
    return 0;
}