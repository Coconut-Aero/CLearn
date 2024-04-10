#include <bits/stdc++.h>
using namespace std;
int jc(int a)
{
    int b=a, result=1;
    while(b>1)
    {
        result*=b;
        b--;
    }
    return result;
}
int main()
{
    int a, hang=0, jca, jchang, result;
    bool gate=0;
    while(hang<=7)
    {
        a=hang;
        jchang=jc(hang);
        while(a>=0)
        {
            jca=jc(a);
            result=jchang/jca;
            cout<<setw(5)<<result;
            a--;
            if(a==1) gate=1;
        }
        hang++;
        cout<<endl;
    }

} 