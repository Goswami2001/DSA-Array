//Sorting an array in ascending manner 
//Here we use "Bubble sort" to sort the array


#include<iostream>
#include<vector>
using namespace std;

//For sorting the array in decending order
void sorted(vector<int> &arr){
    int size = arr.size();
    for(int i = 0;i<size;i++){
        for(int j =0;j < size - i - 1;j++){
            if(arr[j]<arr[j+1]){
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
    for(int i = 0;i<size;i++){    //Takingelement into the array
        cout<<"Enter the element of the array : ";
        cin>>arr[i];
    }
    sorted(arr);   //Calling the function
    cout<<"Sorted array in decending order will be : ";
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";   //Get the desired the result after sorting
    }
    return 0;
}