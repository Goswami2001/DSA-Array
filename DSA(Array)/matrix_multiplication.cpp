//Write a program to display multiplication of two matrices entered by the user
#include<iostream>
using namespace std;
int main(){
    //Taking input of 1st matrix's size
    int r1,c1;
    cout<<"Enter the size of the 1st matrix row : ";
    cin>>r1;
    cout<<"Enter the size of the 1st matrix column : ";
    cin>>c1;
    int arr1[r1][c1];
    cout<<"Taking input of 1st matrix's element : "<<endl;
    //Taking input element of 1st matrix
    for(int i = 0;i < r1;i++){
        for(int j = 0;j < c1;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Displaying of 1st matrix's element : "<<endl;
    //Displaying 1st matrix element
    for(int i = 0;i < r1;i++){
        for(int j = 0;j < c1;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    //Taking input of 2nd matrix's size
    int r2,c2;
    cout<<"Enter the size of the 2nd matrix row : ";
    cin>>r2;
    cout<<"Enter the size of the 2nd matrix column : ";
    cin>>c2;
    int arr2[r2][c2];
    cout<<"Taking input of 2nd matrix's element : "<<endl;
    //Taking input element of 2nd matrix
    for(int i = 0;i < r2;i++){
        for(int j = 0;j < c2;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"Displaying of 2nd matrix's element : "<<endl;
    //Displaying 2nd matrix element
    for(int i = 0;i < r2;i++){
        for(int j = 0;j < c2;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    //Size of the result matrix
    int ans_arr[r1][c2];
    if(c1 == r2){
        for(int i = 0;i < r1;i++){
            for(int j = 0;j < c1;j++){
                int value = 0;
                for(int k = 0;k < r2;k++){
                    value += arr1[i][k] * arr2[k][j];
                }
                ans_arr[i][j] = value;
            }
        }
        cout<<"After matrix multiplication it will be : "<<endl;
        //Dsiplaying result matrix
        for(int i = 0;i < r1;i++){
            for(int j = 0;j < c2;j++){
                cout<<ans_arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"  <------ Matrix multiplication is not possible -----> "<<endl;
    }
    return 0;
}