//Finding the minimum value present in the given array

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {12,34,4,6,2,10,13,26};
    int min = arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);   //Finding the size of the array
    for(int i =0;i<size;i++){
        if(arr[i] < min){    //Check whether any element exist or not which is smaller than current element
            min = arr[i];
        }
    }
    cout<<"Minimum value present in the array : "<<min; //Minimum value 
    return 0;
}