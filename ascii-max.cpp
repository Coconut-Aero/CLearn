#include <bits/stdc++.h>
using namespace std;
/*Informations
    This program is created by XiaoYi Zero on ASUS Vivobook Pro 16
    You can FREELY spread it base on CC-BY-SA-NC 4.0.
    by XiaoYi Zero OpenSource Software Movement.
*/
int maxab(int a, int b)
{
    if(a>b) return a;
    else return b;
}
int main()
{
    char str1[30], j;
    scanf("%s", str1);
    int i=0, num1[30], result;
    while(str1[i]!='\0')
    {
        num1[i]=int(str1[i]);
        i++;
    }
    i=0;
    result=maxab(num1[0],num1[1]);
    i++;
    while(str1[i]!='\0')
    {
        result=maxab(result,num1[i]);
        i++;
    }
    cout<<result<<endl;
    return 0;
}