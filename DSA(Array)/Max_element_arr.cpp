//This code is for finding the maximum element that is present in the array

#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> arr = {12,4,7,8,19,21,33,67,2,1};
   int size = sizeof(arr)/sizeof(arr[0]);   //Finding the size of the array
    int max = arr[0];
    int count = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i] > max){
            max = arr[i]; //If there any greater value exist
            count++;
        }
    }
    cout<<"Maximum value present in the array : "<<max<<endl;
    cout<<"Total no. of count to find the maximum value : "<<count;
    return 0;
}