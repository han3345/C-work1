#include<iostream>
using namespace std;

double getSum(double* a,int n)
{
    double s=0;
    for(int i=0;i<n;++i)
        s+=a[i];
    return s;
}

int getSum(int* a, int n)
{
    int s=0;
    for(int i=0;i<n;++i)
        s+=a[i];
        return s;
}