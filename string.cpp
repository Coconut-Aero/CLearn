#include <bits/stdc++.h>
using namespace std;
/*Informations
    This program is created by XiaoYi Zero on ASUS Vivobook Pro 16
    You can FREELY spread it base on GNU Public License.
    by XiaoYi Zero OpenSource Software Movement.
*/
int main()
{
    char input[20], check;
    int i=0, lett=0, num=0, chara=0;
    cout<<"Give me a string and I will tell you the number of letters, numbers and characters in it.";
    scanf("%s", input);
    while(input[i]!='\0')
    {
        check=input[i];
        if(((check>='A')&&(check<='Z'))||((check>='a')&&(check<='z'))) lett++;
        else if((check>='0')&&(check<='9')) num++;
        else chara++;
        i++;
    }
    cout<<"In string "<<input<<" there have "<<lett<<" letters and "<<num<<" numbers and "<<chara<<" strings."<<endl;
    return 0;
}