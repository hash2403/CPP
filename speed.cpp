
#include<iostream>
using namespace std;
int main(){
    int u,v,a;
    float speed;
    
    cout<<"enter 3 values";
    cin>>u>>v>>a;
    speed=(u*u-v*v)/(2*a);
    cout<<"speed is"<<speed;
    return 0;
    
}
