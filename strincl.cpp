#include <bits/stdc++.h>
using namespace std;
/*Informations
    This program is created by XiaoYi Zero on ASUS Vivobook Pro 16
    You can FREELY spread it base on GNU Public License.
    by XiaoYi Zero OpenSource Software Movement.
*/
int main()
{
    char str1[20], str2[20], temp[20];
    int i=0, start=0, length2=0, posi, q=0, verify=0;
    bool firstinclude; 
    cout<<"Give me two strings, if the second string is included in the first string, I will tell you the start of the second string."<<endl;
    scanf("%s", str1);
    scanf("%s", str2);
    while(str1[i]!='\0')
    {
        if(str1[i]==str2[0]) 
        {
            firstinclude=1;
            start=i;
        }
        i++;
    }
    i=0;
    if(firstinclude==1)
    {
        while(str2[i]!='\0')
        {
            i++;
        }
        length2=i;
        i=start;
        posi= start + length2;
        while(i<posi)
        {
            temp[q]=str1[i];
            q++;
            i++;
        }
        i=0;
        while(str2[i]!='\0')
        {
            if(str2[i]==temp[i]) verify++;
            i++;
        }
        if(verify==length2) 
        {
            cout<<"The second string is included in the first string, the start of it was the "<<start<<" digit of the first string."<<endl;
            return 0;
        }
        else
        {
            cout<<"The second string isn't included in the first string."<<endl;
            return 0;
        }
    }
    else 
    {
        cout<<"The second string isn't included in the first string."<<endl;
        return 0;
    }
}