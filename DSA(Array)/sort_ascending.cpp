//Sorting an array in ascending manner 
//Here we use "Bubble sort" to sort the array

#include<iostream>
#include<vector>
using namespace std;

//Function to sort the array
void sorted(vector<int> &arr){
    int size = arr.size();
    for(int i =0 ;i<size;i++){
        for(int j = 0;j<size - i- 1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return;
}

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int> arr(size);
    for (int i=0;i<size;i++){   //Taking element into the array
        cout<<"Enter the element of the array : ";
        cin>>arr[i];
    }
    sorted(arr);   //Calling the function
    cout<<"Sorted list will be in ascending order : ";
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";   //Print the result 
    }
}