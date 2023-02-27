//This program to print a sorted array which consist only the value of 0,1 and 2 without applying any type of sorting algorithm....
//[Time complexity will be O(n) for this program....]

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the array : "; //Taking the size of the array
    cin>>size;
    int arr[size];
    for(int i =0;i<size;i++){
        cout<<"Enter the element for the array : ";  
        cin>>arr[i];  //Taking the elements in the array
    }
    int count_zero = 0; //For counting the no. of 0's
    int count_one = 0;  //For counting the no. of 1's
    int count_two = 0;  //For counting the no. of 2's
    for(int i = 0;i<size;i++){
        if(arr[i]==0){
            count_zero++;  //For finding total no. of 0's present
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            count_one++;  //For finding total no. of 1's present
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]==2){
            count_two++;  //For finding total no. of 2's present
        }
    }
    int k = 0;  //K variable used for itterate the array arr

    //Giving appropriate place of 0,1 and 2
    for(int i = 0;i<count_zero;i++){
        arr[k] = 0;
        k++;
    }
    for(int i = 0;i<count_one;i++){
        arr[k]=1;
        k++;
    }
    for(int i = 0;i<count_two;i++){
        arr[k]=2;
        k++;
    }
    cout<<"After sorting array will be : ";
    //For printing the array
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}