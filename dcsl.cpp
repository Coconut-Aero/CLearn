#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1, a2, n, dis, temp, an;
    cin>>a1>>a2>>n;
    dis=a2-a1;
    temp= dis * (n - 1);
    an= temp + a1;
    cout<<an<<endl;
    return 0;
}