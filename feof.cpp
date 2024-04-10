#include<bits/stdc++.h>
using namespace std;
int maxab(int a, int b)
{
    if(a>b) return 1;
    else return 2;
}
int main()
{
    FILE *fp1, *fp2, *fp3;
    char ch1,ch2,ch3;
    int LengthOf1=-1,LengthOf2=-1,longerone=0,LengthTotal=0,n=0;
    bool ends1,ends2;
    fp1=fopen("a.txt","r");
    fp2=fopen("b.txt","r");
    fp3=fopen("c.txt","w");
    ch1=fgetc(fp1);
    ch2=fgetc(fp2);
    if(fp1==NULL&&fp2==NULL)
    {
        cout<<"File Not Found."<<endl;
        return 0;
    }
    else
    {
        cout<<"File Founded."<<endl;
        while(!feof(fp1))
        {
            fgetc(fp1);
            LengthOf1++;
        }
        while(!feof(fp2))
        {
            fgetc(fp2);
            LengthOf2++;
        }
        fclose(fp1);
        fclose(fp2);
        LengthTotal=LengthOf1+LengthOf2;
        fp1=fopen("a.txt","r");
        fp2=fopen("b.txt","r");
        longerone=maxab(LengthOf1,LengthOf2);
        if(longerone==1)
        {
            while(n<LengthOf2)
            {
                ch1=fgetc(fp1);
                cout<<ch1<<endl;
                fputc(ch1,fp3);
                ch2=fgetc(fp2);
                if(feof(fp2)) 
                {
                    break;
                }
                else 
                {
                    cout<<ch2<<endl;
                    fputc(ch2,fp3);
                }
                n++;
            }
            while(n<LengthTotal)
            {
                ch1=fgetc(fp1);
                fputc(ch1,fp3);
                n++;
            }
        }
        else
        {
            while(n<LengthOf1)
            {
                ch1=fgetc(fp1);
                if(feof(fp1)) 
                {
                    break;
                }
                else
                {
                    cout<<ch1<<endl;
                    fputc(ch1,fp3);
                    ch2=fgetc(fp2);
                    cout<<ch2<<endl;
                    fputc(ch2,fp3);
                }
                n++;
            }
            while(n<LengthTotal)
            {
                ch2=fgetc(fp2);
                fputc(ch2,fp3);
                n++;
            }
        }
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);       
        cout<<"Task Complete."<<endl;
    }
}