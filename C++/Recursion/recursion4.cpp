#include<bits/stdc++.h>
using namespace std;

int firstocc(int n, int arr[], int i, int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(n,arr,i+1,key);
}

int lastocc(int n, int arr[], int i, int key){
    if(i==n){
        return -1;
    }
    if(lastocc(n,arr,i+1,key)!=-1){
        return lastocc(n,arr,i+1,key);
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    int fo = firstocc(n,arr,0,key);
    cout<<"The first occurence is: "<<fo<<endl;

    int lo = lastocc(n,arr,0,key);
    cout<<"The last occurence is: "<<lo<<endl;

    return 0;
}