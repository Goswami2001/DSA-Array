//Write a program sor searching an element if it's not found then return
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    for(int i = 0;i <= size;i++){
        cout<<"Enter array element : ";
        cin>>arr[i];
    }
    int num,index = -1;
    cout<<"Enter the element you want to find : ";
    cin>>num;
    for(int i = 0;i < size;i++){
        if(arr[i] == num){
            cout<<"At index : "<<i;
            index++;
        }
        else{
            cout<<"At index : "<<index;
            break;
        }
    }
    return 0;
}