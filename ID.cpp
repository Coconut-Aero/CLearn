#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int putin;
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q;
    int a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1, q1;
    cout<<"Tell me the before 17 digit of your P.R.China Resident ID Num. , and I will tell you the last digit of it."<<endl<<"Your ID number:";
    cin>>putin;
    a= putin / 10000000000000000;
    b= putin / 1000000000000000 % 10;
    c= putin / 100000000000000 % 10;
    d= putin / 10000000000000 % 10;
    e= putin / 1000000000000 % 10;
    f= putin / 100000000000 % 10;
    g= putin / 10000000000 % 10;
    h= putin / 1000000000 % 10;
    i= putin / 100000000 % 10;
    j= putin / 10000000 % 10;
    k= putin / 1000000 % 10;
    l= putin / 100000 % 10;
    m= putin / 10000 % 10;
    n= putin / 1000 % 10;
    o= putin / 100 % 10;
    p= putin / 10% 10;
    q= putin % 10;
    
    return 0;
}