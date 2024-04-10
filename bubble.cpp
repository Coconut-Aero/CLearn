#include<bits/stdc++.h>
using namespace std;
int co(int a, int b)
{
    if(a>b) return 0;
    else return 1;
}
int main()
{
    int array[10],i=0;
    while(i<=9)
    {
        cin>>array[i];
        i++;
    }
    i=0;
    int compare=0,temp1,temp2,veri;
    while(compare<9)
    {
        veri=co(array[i],array[i+1]);
        if(veri==0)
        {
            i++;
            compare++;
        }
        else
        {
            temp1=array[i];
            temp2=array[i+1];
            array[i]=temp2;
            array[i+1]=temp1;
            i++;
            compare=0;
        }
        if(i==9) i=0;
    }
    i=0;
    while(i<=9)
    {
        cout<<array[i]<<endl;
        i++;
    }
    return 0;
}