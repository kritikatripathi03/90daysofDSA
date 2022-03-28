#include<bits/stdc++.h>
using namespace std;

void permutations(int* arr, int n){
    if(sizeof(arr)==0){
        return;
    }
    if(sizeof(arr)==1){
        cout<<arr[0];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
        permutations(arr-arr[i],n-1);
    }
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    permutations(arr,n);

    return 0;
}