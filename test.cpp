#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    string a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    string aa="",bb="";
    for(int i=a.length()-1;i>=0;--i)
        aa.push_back(a[i]);
    for(int i=b.length()-1;i>=0;--i)
        bb.push_back(b[i]);

    cout<<"倒序输出："<<bb<<" "<<aa<<endl;
    cout<<"复制输出："<<c<<endl;
    if(d==e)
        cout<<"判断结果：两字符串相等。\n";
    else 
        cout<<"判断结果：两字符串不相等。\n";

}