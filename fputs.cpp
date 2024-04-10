#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *fp;
    char ch,line[100];
    int i;
    fp=fopen("test.txt","a+");
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
            cin>>line;
            fputs(line,fp);
            fputs("\n",fp);
            cout<<"Have put in test.txt."<<endl;
        }
        i=0;
        fclose(fp);
        fp=fopen("test.txt","a+");
        ch=fgetc(fp);
        while(!feof(fp))
        {
            ch=fgetc(fp);
            putchar(ch);       
        }
        fclose(fp);
        return 0;
    }
}