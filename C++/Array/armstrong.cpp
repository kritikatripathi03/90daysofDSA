#include<bits/stdc++.h>
using namespace std;


bool armstrong(int n){
    int temp=n,count=0, sum=0;
    while(temp>0){
        count++;
        temp/=10;
    }

    temp=n;
    while(temp>0){
        int rem = temp%10;

        int num=1;
        for(int i=1; i<=count; i++){
            num*=rem;
        }
      
        sum+=num;
        temp/=10;
    }
 
    if(sum==n){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a,b,sum=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(armstrong(i)){
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}