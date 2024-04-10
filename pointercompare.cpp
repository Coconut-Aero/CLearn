#include <bits/stdc++.h>
using namespace std;
/*
    Informations
    This program is created by XiaoYi Zero on ASUS Vivobook Pro 16
    You can FREELY spread it base on CC-BY-SA-NC 4.0.
    by XiaoYi Zero OpenSource Software Movement.
*/
void input(char a[10], int n) {
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
}
int stringcmp(char *p, char *q)
{
    int m, n;
    m=int(*p);
    n=int(*q);
    if(m>n) return -1;
    else if(m==n) return 0;
    else return 1;
}
int main()
{
    int cishu=0,yanzheng;
    char *p="1234567890",*q;
    char a[10];
    input(a,10);
    q=a;
    while(cishu<10)
    {
        yanzheng=stringcmp(p, q);
        if(yanzheng==-1)
        {
            cout<<"smaller!"<<endl;
            input(a,10);
            cishu=0;
        }
        if(yanzheng==0)
        {
            *p++;
            *q++;
            cishu++;
        }
        if(yanzheng==1)
        {
            cout<<"larger!"<<endl;
            input(a,10);
            cishu=0;
        }
    }
    return 0;
}