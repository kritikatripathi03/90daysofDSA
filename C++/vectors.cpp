#include<bits/stdc++.h>
using namespace std;
/*A const iterator points to an element of constant type which means the element which is being pointed to by a 
const_iterator can't be modified. Though we can still update the iterator (i.e., the iterator can be incremented 
or decremented but the element it points to can not be changed).
cbegin, cend, crbegin, and crend are constant iterators.*/
int main(){
    vector<int> g1;
    vector<int> v (3,50); //50 50 50
    for(auto element:v){
        cout<<element<<" ";
    }

    for(int i =1; i<=5; i++){
        g1.push_back(i);
    }

    cout<<"Output of begin and end:";
    for(auto i=0; i<g1.size();++i){
        cout<<g1[i]<<" ";
    }

    cout<<"Through iterator keyword:"<<endl;
    vector<int>:: iterator it;
    for(it=g1.begin();it!=g1.end();it++){
        cout<<*it<<" ";
    }

    cout<<"Use pop back to remove last element from the vector:"<<endl;
    g1.pop_back();
    cout<<"Output of begin and end:";
    for(auto i=g1.begin(); i!=g1.end();++i){
        cout<<*i<<" ";
    }

    cout<<"\nOutput in cbegin and cend:";
    for(auto i=g1.cbegin(); i!=g1.cend();++i){
        cout<<*i<<" ";
    }

    cout<<"\nOutput in rbegin and rend:";
    for(auto ir=g1.rbegin(); ir!=g1.rend();++ir){
        cout<<*ir<<" ";
    }

    cout<<"\nOutput in crbegin and crend:";
    for(auto ir=g1.crbegin(); ir!=g1.crend();++ir){
        cout<<*ir<<" ";
    }

    cout<<"Swapping is so easy using vectors:"<<endl;
    swap(v,g1);

    cout<<"Now, g1 is:"<<endl;
    for(auto element:g1){
        cout<<element<<" ";
    }

    cout<<"Now, v is:"<<endl;
    for(auto element:v){
        cout<<element<<" ";
    }

    vector<int> v2{10,2,8,5,3,7,3,8,12};
    sort(v2.begin(),v2.end());

    cout<<"I made a vector with random elements and then sorted it, now look what tis:"<<endl;
    for(auto element:v2){
        cout<<element<<" ";
    }

    cout<<"Size: "<<g1.size();
    cout<<"\nCapacity: "<<g1.capacity();
    cout<<"\nMAx size: "<<g1.max_size();

    g1.resize(4);

    cout<<"\nSize after Resize: "<<g1.size();

    if(g1.empty()){
        cout<<"g1 is an empty vector!"<<endl;
    }
    else{
        cout<<"g1 is not an empty vector!"<<endl;
    }

    g1.shrink_to_fit();

    for(auto it = g1.begin(); it!=g1.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}