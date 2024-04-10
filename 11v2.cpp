#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1=100, num2=0;
    for(num1=100;num1<1000;num1++)
    {
        int a, b, c, d;
        d=num1%11;
        if(d==0)
        {
            a=num1/100;
            b=num1/10%10;
            c=num1%10;
            if((a!=b)&&(b!=c)&&(c!=a))
            {
                cout<<setw(6)<<num1<<endl;
                num1++;
                num2++;
            }
            else
            {
                num1++;
            }
        }
        else
        {
            num1++;
        }
        continue;
    }
    cout<<setw(6)<<num2<<endl;
    return 0;
}