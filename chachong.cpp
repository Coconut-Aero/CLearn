#include<bits/stdc++.h>
using namespace std;
int strcmp(char a, char b)
{
    if(a==b) return 0;
    else return 1;
}
int main()
{
    char str1[5];
    int str;
    int a=0, b=1;
    cin>>str1;
    while(a<=4&&b<=4)
    {
        str=strcmp(str1[a],str1[b]);
        if(str==0)
        {
            cout<<"找到了"<<endl;
            break;
        }
        else
        {
            if(b<4)
            {
                b++;
            }
            else if(b==4&&a<4)
            {
                a++;
                b=a+1;
            }
            else
            {
                cout<<"找不到"<<endl;
            }
        }
    }
    return 0;
}