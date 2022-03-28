#include<bits/stdc++.h>
using namespace std;

int tilling(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    return (tilling(n-1)+tilling(n-2));
}

int main(){
    int n;
    cin>>n;

    cout<<tilling(n)<<endl;
    return 0;
}