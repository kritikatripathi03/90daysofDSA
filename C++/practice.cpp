#include<bits/stdc++.h>
using namespace std;

string rlen(string s){
    char ch = s[0];
    int i;
    for(i=1;i<s.length();i++){
        if(s[i]!=ch){
            break;
        }
    }
    if(s.length()==0){
        return "";
    }
    if(i==2){
        string str = s.substr(0,2);
        return str+rlen(s.substr(2,s.length()-2));
    }
    else if(i>2){
        return to_string(i)+s[0]+rlen(s.substr(i,s.length()-i));
    }
    return s[0]+rlen(s.substr(i,s.length()-i));
    
}
int main(){
    string s;
    getline(cin,s);
    cout<<rlen(s);
    return 0;
}