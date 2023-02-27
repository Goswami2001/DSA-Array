//Push negative number into the front sight to get the desired output where negative number cames before positive number

#include<bits/stdc++.h>
using namespace std;

//Function for change the negative no. position into front side
void change_neg_pos(int arr[],int n){
    sort(arr,arr + n);
    return;
}

int main(){
    int arr[] = {5,2,-1,0,6,-2,-8,-3};
    int size = sizeof(arr) / sizeof(arr[0]);
    change_neg_pos(arr,size);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}