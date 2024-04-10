#include<bits/stdc++.h>
using namespace std;
int verify(char *s,int i)
{
	if(s[i]!='\0') return 1;
    else return 0;
} 
int main()
{
    char str[100], *pt=str;
    int n=0,i=0,ver;
    cout<<"请输入一个不超过100个字符的字符串:"; 
	cin>>str;
    while(n<100&&str[n]!='\0')
    {
        ver=verify(str,n);
        if(ver==1) 
        {
            i++;
            n++;
        }
        else
        {
            n++;
        }
    }
    cout<<"这个字符串的长度是："<<i<<endl;
    return 0;
}