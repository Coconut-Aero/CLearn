#include<bits/stdc++.h>
using namespace std;
int length(char a[])
{
    int i;
    while(a[i]!='\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char a[100];
    begin:
    int i=0;
    cout<<"请输入一个不多于100个字符的字符串。"<<endl;
    cin>>a;
    i=length(a);
    if(a[0]=='e'&&a[1]=='x'&&a[2]=='i'&&a[3]=='t')
    {
        cout<<"bye!"<<endl;
        return 0;
    }
    else
    {
        while(i>=0)
        {
            cout<<a[i];
            i--;
        }
    }
    cout<<endl;
    goto begin;
}