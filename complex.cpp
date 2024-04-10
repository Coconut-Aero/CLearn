#include<bits/stdc++.h>
using namespace std;
struct comp
{
    float re, im;
}x,y,z;
int main()
{
    cout<<"请输入两个复数的实部和虚部"<<endl;
    cout<<"第一个复数的实部：";
    cin>>x.re;
    cout<<"第一个复数的虚部：";
    cin>>x.im;
    cout<<"第二个复数的实部：";
    cin>>y.re;
    cout<<"第二个复数的虚部：";
    cin>>y.im;
    z.re = (x.re * y.re) - (x.im * y.im);
    z.im = (y.re * x.im) + (x.re * y.im);
    cout<<"这两个复数相乘的积是： "<<z.re<<"+"<<z.im<<"i"<<endl;
    return 0;
}
