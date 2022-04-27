#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int a;
    int flag=0;
    bool in[100000]={0};
    while(cin>>a){
        if(in[a]){
            cout<<a<<" ";
            flag=1;
        }
        in[a]=1;
    }
    if(flag==0)
        cout<<"没有交集";
    cout<<endl;
    return 0;
}