#include<bits/stdc++.h>
using namespace std;

string duplicate(string s){
    if(s.length()==0){
        return "";
    }
    if(s[0]==s[1]){
        return s[0]+duplicate(s.substr(2));
    }
    else{
        return s[0]+duplicate(s.substr(1));
    }
}
int main(){
    string s;
    getline(cin,s);

    string s2 = duplicate(s);
    cout<<s2<<endl;
    return 0;
}