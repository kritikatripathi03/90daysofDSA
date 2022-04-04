#include<bits/stdc++.h>
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }

    return false;
}

bool ratinmaze(int** arr, int x, int y, int n, int** sol){

    if(x==n-1 && y==n-1){
        sol[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,n)){
        sol[x][y]=1;
        if(ratinmaze(arr, x+1, y, n, sol) || ratinmaze(arr, x, y+1, n, sol)){
            return true;
        }
        sol[x][y]=0;
        return false;
    }
}

int main(){
    int arr[4][4]={(1,0,0,0),(1,1,0,1),(0,1,1,1),(0,0,0,1)};

}