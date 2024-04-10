#include <bits/stdc++.h>
using namespace std;
int main()
{
    float  wage, prize, total, temp1;
    int temp2=0 ;
    cout<<"Enter the wage and I will tell you the prize.";
    cin>>wage;
    while (temp1>10)
    {
       temp1/=10;
       temp2++;
    }
    switch (temp2)
    {
        case 0:
        case 1:
        case 2:
            prize= wage*0.01;
            break;
        case 3:
            if (temp1<5) prize= wage*0.02;
            else prize= wage*0.03;
            break;
        case 4:
            prize= wage*0.04;
            break;
        case 5:
            prize= wage*0.05;
            break;
        default:
            cout<<"Your input is invalided!"<<endl;
            break;
        
    }
    total= wage+ prize;
    cout<<setiosflags(ios::fixed)<<setprecision(2);
    cout<<"The total is "<<total<<endl;
    return 0;
}