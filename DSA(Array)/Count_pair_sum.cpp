//This program is for finding the no. of pair for getting the sum result

#include<iostream>
using namespace std;

int find_pair(int arr[],int size,int sum){
    int count = 0;
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if(arr[i] + arr[j] == sum){
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum;
    cout<<"Enter the total sum which you want to find : ";
    cin>>sum;
    cout<<"Total count of pair for getting the sum : "<<find_pair(arr,size,sum);
    return 0;
}