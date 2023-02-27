//This program is for finding the no. of occurence of a number in the given array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,2,1,2,2,5,2,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int find_occurence;
    cout<<"Enter the number which occurence you want to find : ";
    cin>>find_occurence;  //Taking input from the user that which elements occurence is to find.....
    int total = 0;
    for(int i = 0;i<size;i++){
        if(find_occurence == arr[i]){
            total++;
        }
    }
    cout<<"Total no. of occurence in the array for given input is : "<<total;
    return 0;
}