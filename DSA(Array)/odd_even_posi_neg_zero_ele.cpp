//Take 20 integer inputs from user and print the following:
// a| number of positive numbers
// b| number of negative numbers
// c| number of odd numbers
// d| number of even numbers
// e| number of 0.
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    //Taking input element for the array
    for(int i = 0;i < size;i++){
        cout<<"Enter the array element : ";
        cin>>arr[i];
    }
    //Printing the array
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    int pos = 0,neg = 0,zero = 0,odd = 0,even = 0;
    for(int i = 0;i < size;i++){
        if(arr[i] > 0){
            pos++;
        }
        if(arr[i] < 0){
            neg++;
        }
        if(arr[i] == 0){
            zero++;
        }
        if(arr[i] % 2 == 0){
            odd++;
        }
        if(arr[i] % 2 != 0){
            even++;
        }
    }
    cout<<"Total positive number in the array : "<<pos<<endl;
    cout<<"Total negative number in the array : "<<neg<<endl;
    cout<<"Total zero in the array : "<<zero<<endl;
    cout<<"Total odd number in the array : "<<odd<<endl;
    cout<<"Total even number in the array : "<<even<<endl;
    return 0;
}