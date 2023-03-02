//Write a program by using vector to find the difference between the sum of even indices to the sum of elements at odd indices
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>arr(size);
    //Taking input of the array's elemnt
    for(int i = 0;i < arr.size();i++){
        cout<<"Enter the array element : ";
        cin>>arr[i];
    }
    //Printing the array
    for(int i = 0;i < arr.size();i++){
        cout<<arr[i]<<" ";
    }
    int sum = 0;
    for(int i = 0;i < arr.size();i++){
        if(i % 2 == 0){
            sum += arr[i];
        }
        else{
            sum -= arr[i];
        }
    }
    cout<<"Total sum : "<<sum<<endl;
    return 0;
}