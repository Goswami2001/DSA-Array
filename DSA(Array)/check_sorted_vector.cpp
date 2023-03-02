//Check whether an array is sorted or not i n ascending order using vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Array is sorted if it shows 1 otherwise it shows 0 for unsorted array"<<endl;
    int size;
    bool flag = true;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>arr(size);
    //Taking input of the array
    for(int i = 0;i < arr.size();i++){
        cout<<"Enter array element : ";
        cin>>arr[i];
    }
    //Printing the array
    for(int i = 0;i < arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 1;i < arr.size();i++){
        if(arr[i] < arr[i-1]){
            flag = false;
        }
        
    }
    cout<<"Array is : "<<flag<<endl;
    return 0;
}