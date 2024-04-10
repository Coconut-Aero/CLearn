#include <bits/stdc++.h>
using namespace std;
/*Informations
    This program is created by XiaoYi Zero on ASUS Vivobook Pro 16
    You can FREELY spread it base on CC-BY-SA-NC 4.0.
    by XiaoYi Zero OpenSource Software Movement.
*/
int jiou(int a)
{
    int ver;
    ver=a%2;
    if(ver==1) return 1;
    else return 0;
}
int main()
{
    int a, b, i, c;
    cin>>a>>b;
    i=a;
    while(i<b)
    {
        c=jiou(i);
        if(c==0) 
        {
            cout<<i<<endl;
            i++;
        }
        else i++;
    }
    return 0;
}