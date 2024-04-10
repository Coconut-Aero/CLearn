#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *fp;
    char ch;
    int i;
    fp=fopen("test.txt","r");
    if(fp==NULL)
    {
        cout<<"File Not Found."<<endl;
        return 0;
    }
    else
    {
        cout<<"File Founded."<<endl;
        for(i=0;i<10;i++)
        {
            putchar(ch);
            ch=fgetc(fp);       
        }
        fclose(fp);
        return 0;
    }
}