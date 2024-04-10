#include <bits/stdc++.h>
using namespace std;
/*Informations
    This program is created by XiaoYi Zero on ASUS Vivobook Pro 16
    You can FREELY spread it base on CC-BY-SA-NC 4.0.
    by XiaoYi Zero OpenSource Software Movement.
*/
int age(int n)
{
    int ret;
    if(n==1) return 10;
    else
    {
        ret=age(n-1)+2;
        return ret;
    }  
}
int main()
{
    int n,m;
    cin>>n;
    m=age(n);
    cout<<m;
    return 0;
}