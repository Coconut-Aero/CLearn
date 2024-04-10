#include <bits/stdc++.h>
using namespace std;
int main()
{
    float  wage, prize, total;
    cout<<"Enter the wage and I will tell you the prize.";
    cin>>wage;
    if(wage<=1000) prize= wage*0.01;
    else if((wage>1000)&&(wage<=5000)) prize= wage*0.02;
    else if((wage>5000)&&(wage<=10000)) prize= wage*0.03;
    else if((wage>10000)&&(wage<=100000)) prize= wage*0.04;
    else if(wage>100000) prize= wage*0.05;
    else {
        cout<<"Your input is invalided!"<<endl; 
        return 0;
        }
    total= wage+ prize;
    cout<<setiosflags(ios::fixed)<<setprecision(2);
    cout<<"The total is "<<total<<endl;
    return 0;
}