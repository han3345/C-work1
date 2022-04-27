//线性表实现一元稀疏多项式计算
//输入：a=5.5X^3+4X^999+.....
//b=77777X^12344+2342342353X^34234423+.....
//输出a+b=？
//**仅限整数次幂！**
#include<iostream>
#include<ctime>
#include<cstdio>
using namespace std;


long double a[100];//系数
long long b[100]={0,1,22,333,4444,55555,666666,7777777,88888888,999999999};//指数
long double c[100];//系数
long long d[100]={0,9,88,777,6666,55555,444444,3333333,22222222,111111111};//指数

void makeInput()
{
    // n1=rand
    // make(a,b,n1)
    // n2=rand
    // make(c,d,n2)
    // print X1,X2
    srand((unsigned)time(NULL));
    for(int i=1;i<=9;++i){
        a[i]=rand()%997;// a prime number
        c[i]=rand()%997;// a prime number
    }
    return;
}


void add()
{
    //new queue;
    long long x[100]={0},y[100]={0};
    int s=0;
    int i=1,j=1;
    while(i<=9&&j<=9){
        if(b[i]<d[j]){
            x[++s]=b[i];
            y[s]=a[i];
            i++;
        }else if(b[i]>d[j]){
            x[++s]=d[j];
            y[s]=c[j];
            j++;
        }else{
            x[++s]=b[i];
            y[s]=a[i]+c[j];
            i++;
            j++;
        }
    }
    for(i;i<=9;++i){
        x[++s]=b[i];
        y[s]=a[i];
    }
    for(j;j<=9;++j){
        x[++s]=d[j];
        y[s]=c[j];
    }
    for(int i=1;i<=s;++i)
        cout<<y[i]<<"X^"<<x[i]<<"+"<<endl;
    return;
}


int main()
{
    makeInput();
    add(); 
    return 0;
}