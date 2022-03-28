#include<bits/stdc++.h>
using namespace std;

void swap(int* m, int* n){
    *m=*m+*n;
    *n=*m-*n;
    *m=*m-*n;
}

int main(){
    int a=10;
    int* aptr = &a;
    cout<<*aptr<<endl;

    *aptr=20;
    cout<<aptr<<endl;

    int arr[]={10,20,30};
    cout<<*arr<<endl;

    int *ptr=arr;
    for(int i=0; i<3; i++){
        cout<<*(arr+i)<<endl;
    }

    int b=10;
    int c=20;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
}