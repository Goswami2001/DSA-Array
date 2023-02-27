//Reverse the array by taking array element from the user

#include<iostream>
#include<vector>
using namespace std;


int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int> arr(size);
    for(int i = 0;i<size;i++){
        cout<<"Enter the elements of the array : ";
        cin>>arr[i];
    }

    //At first the array will be
    cout<<"Before reversing the array : ";
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    //After reversing the array
    int temp;
    for(int i=0,j=size-1;i<size/2;i++,j--){
	    temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
    cout<<endl;
    cout<<"After reversing the array will be : ";
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}