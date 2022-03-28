#include<bits/stdc++.h>
using namespace std;

string xlast(string s){
    if(s.length()==0){
        return "";
    }
    if(s[0]=='x'){
        return xlast(s.substr(1))+s[0];
    }
    return s[0]+xlast(s.substr(1));
}
int main(){
    string s;
    getline(cin,s);

    string result = xlast(s);
    cout<<result<<endl;

    return 0;
}