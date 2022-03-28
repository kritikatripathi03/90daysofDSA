#include<bits/stdc++.h>
using namespace std;

int rev(int n){
    int revn = 0;
    while(n!=0){
        int rem = n%10;
        revn = revn*10 + rem;
        n/=10;
    }
    return revn;
}
//comment
int main(){
    int n;
    cin>>n;
    cout<<"The original number is: "<<n<<endl;
    int revn = rev(n);
    cout<<"The reversed number is: "<<revn<<endl;
    return 0;
}