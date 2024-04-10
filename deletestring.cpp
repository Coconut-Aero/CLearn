#include<iostream>
using namespace std;

char delenum(char *s,int i)
{
	if(s[i]<'0'||s[i]>'9'&&s[i]!='\0') return s[i];
    else return' ';
} 

char delelett(char *s,int i)
{
	if(s[i]>'0'&&s[i]<'9'&&s[i]!='\0')  return s[i]; 
    else return' ';
} 

int main()
{
	char str[11],num[11],lett[11];
    int  m=0,n=0;
	cout<<"请输入一个不超过10个字符的字符串"<<endl; 
	cin>>str;
	while(m<10&&n<10)
    {
        lett[m]=delenum(str,m);
        num[n]=delelett(str,n);
        m++;
        n++;
    }
    num[10]='\0';
	cout<<"删除数字以后的字符串为"<<endl;
	cout<<lett<<endl;
    cout<<"数字为"<<endl;
    cout<<num<<endl;
    return 0;
}