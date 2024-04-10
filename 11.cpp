#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1=100, num2=0;
    while(num1<1000)
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
                cout<<setw(5)<<num1;
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
    }
    cout<<endl;
    cout<<"Total numbers which can be divided by 11 and without duplicate numbers within 100 and 999 have "<<num2<<" numbers"<<endl;
    return 0;
}