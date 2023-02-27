//Find the sum which is in between index number of the array or sub-array
#include<bits/stdc++.h>
using namespace std;


void find_index(int arr[],int sum,int n){
    int currentSum;
    for(int i=0;i<n;i++){
        currentSum = arr[i];
        //If sum is present already at index
        if(currentSum == sum){
            cout<<"Sum found at index : "<<i<<endl;
            return;
        }
        else{
            //If sum is not present at index then we add elements of the array to find the desired output
            for(int j=i+1;j<n;j++){
                currentSum += arr[j];
                if(currentSum == sum){
                    cout<<"Subarray found from index : "<<i<<" to index : "<<j<<endl;
                    return;
                }
            }
        }
    }
    //If upper two condition not satisfied then it will be execute
    cout<<"Subarray is not found";
    return;
}

int main(){
    int arr[] = {3,6,7,2,11,25,52,55,33,56,14};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum;
    cout<<"Enter the sum you want to find : ";
    cin>>sum;
    find_index(arr,sum,size);
    return 0;
}