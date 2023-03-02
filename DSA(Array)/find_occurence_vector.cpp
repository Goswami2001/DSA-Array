//Find the last occurence of an elemnt x in a given array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>arr(size);
    for(int i = 0;i < arr.size();i++){
        cout<<"Enter the array element : ";
        cin>>arr[i];
    }
    int x,occurence = -1;
    cout<<"Enter the value : ";
    cin>>x;
    for(int i = 0;i < arr.size();i++){
        if(arr[i] == x){
            occurence++;
        }
    }
    if(occurence > 1){
        cout<<"Occurence occured of the element "<<occurence<<"x times"<<endl;
    }
    else{
        cout<<"Occurence occured of the element "<<occurence<<"x times"<<endl;
    }
    return 0;
}