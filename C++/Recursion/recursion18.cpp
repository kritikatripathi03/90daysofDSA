#include<bits/stdc++.h>
using namespace std;
//0-1 Knapsack Problem
int knapsack(int wt[], int value[], int n, int W){
    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(wt,value,n-1,W);
    }
    return max((knapsack(wt,value,n-1,W-wt[n-1])+value[n-1]),knapsack(wt,value,n-1,W));;
}

int main(){
    int wt[]={10,20,30};
    int value[]={100,50,150};

    int result = knapsack(wt, value, 3, 50); 
    cout<<"The maximum value will be:"<<result<<endl;
}