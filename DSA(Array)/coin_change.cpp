//Given N and an array(say coins[]) that contains some numbers(coins in rupees). N is a coin, and the array contains various coins. The task is to make the change of N using the coins of the array. Make a change in such a way that a minimum number of coins are used.
#include<bits/stdc++.h>
using namespace std;

int find(int coins[],int size,int total){
    //Base Case
    if(total == 0){
        return 0;
    }
    int result = INT_MAX;
    for(int i = 0 ;i < size;i++){
        if(coins[i] <= total){
            //Assumption & Self-work
            int sub_res = 1 + find(coins,size,total - coins[i]);
            if(sub_res < result){
                result = sub_res;
            }
        }
    }
    return result;
}
int main(){
    int coins[] = {10,5,2,1};
    int total;
    cout<<"Enter the sum you want : ";
    cin>>total;
    int size = sizeof(coins) / sizeof(coins[0]);
    cout<<"Total coins are required : "<<find(coins,size,total)<<endl;
    return 0;
}