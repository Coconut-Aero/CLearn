#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10]="computer";
    char*out=str;
    while(*out!='\0')
    {
        cout<<*out<<endl;
        out+=2;
    }
    return 0;
}