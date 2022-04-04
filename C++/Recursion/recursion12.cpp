#include<bits/stdc++.h>
using namespace std;

string key[] = {"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypadwaalaphone(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string code = key[ch-'0'];
    string ros = s.substr(1);
    for(int i=0;i<code.length();i++){
        keypadwaalaphone(ros, ans+code[i]);
    }

}
int main(){
    keypadwaalaphone("5748452","");
    return 0;
}