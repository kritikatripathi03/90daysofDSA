#include<bits/stdc++.h>
using namespace std;

int sumtill(int n){
    if(n==0){
        return 0;
    }
    return sumtill(n-1)+n;
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return (fibonacci(n-1)+fibonacci(n-2));
}

int power(int a, int b){
    if(b==0){
        return 1;
    }
    return a*power(a,b-1);
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int sum;
    sum=sumtill(n);
    cout<<"The sum till "<<n<<" is "<<sum<<endl;
    int fact;
    fact=factorial(n);
    cout<<"The factorial of "<<n<<" is "<<fact<<endl;
    cout<<"Fibonacci:"<<fibonacci(n)<<endl;
    int p;
    cout<<"\nEnter a power:";
    cin>>p;
    int result;
    result = power(n,p);
    cout<<n<<" raised to power "<<p<<" is "<<result<<endl;
    return 0;
}
