//Tower Of Hanoi
/*Basically, we are moving n-1 blocks from A to B and then keeping the last block in C and keeping all the other blocks from B to C.
Now, you will say how come can I tranfer n-1 blocks to B when I can transfer only 1 block at a time to another rod according to the rule.
So, we will apply the smae alogrithm as above to transfer n-1 blocks to B, at that time our aim would be to transfer some blocks in B 
and our helping rod will be C.
-> To transfer m(n-1) blocks in B we will have to transfer m-1 blocks in C, and so on... we will reach a point when we will just have to
transfer 1 block to any rod and that is how it will come up. 
Now, we know the transferring of n-1 blocks situation but what about the transfering of those n-1 blocks orderwise at their actual destination?
Like now, I transferred n-1 blocks to B and last block from A to C, but how do I transfer the n-1 blocks from B to C orderwise.
Well, for that again a similar process would go, in this case the helper would be A as now it is empty and source will be B and ya, ofc, the
final destination is C. And if there are more number of blocks the process will further continue through recursion!*/
#include<bits/stdc++.h>
using namespace std;

void towerofhanoi(int n, char src, char dest, char helper){
    if(n==0){
        return;
    }
    towerofhanoi(n-1, src, helper, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofhanoi(n-1, helper, dest, src);
}

int main(){
    int n;
    cin>>n;
    towerofhanoi(n,'A','C','B');

    return 0;
}