#include <bits/stdc++.h>
using namespace std;
int maxab(int a,int b)
{
    if(a>b) return a;
    else return b;
}
int minab(int a,int b)
{
    if(a>b) return b;
    else return a;
}
int main()
{
    int a, b, c, d;
    int max,mid1,mid2,min;
    int temp1, temp2, temp3, temp4, temp5, temp6;
    cout<<"Enter four numbers and I will give it to you from smaller to bigger."<<endl;
    cin>>a>>b>>c>>d;
    temp1=maxab(a,b);
    temp2=minab(a,b);
    temp3=maxab(temp1,c);
    temp4=minab(temp2,c);
    max=maxab(temp3,d);
    min=minab(temp4,d);
    if ((max==a)&&(min==b)) 
    {
        mid1=maxab(c,d);
        mid2=minab(c,d);
    }
    if ((max==a)&&(min==c)) 
    {
        mid1=maxab(b,d);
        mid2=minab(b,d);
    }
    if ((max==a)&&(min==d)) 
    {
        mid1=maxab(c,b);
        mid2=minab(c,b);
    }
    if ((max==b)&&(min==a)) 
    {
        mid1=maxab(c,d);
        mid2=minab(c,d);
    }
    if ((max==b)&&(min==c)) 
    {
        mid1=maxab(a,d);
        mid2=minab(a,d);
    }
    if ((max==b)&&(min==d)) 
    {
        mid1=maxab(c,a);
        mid2=minab(c,a);
    }
    if ((max==c)&&(min==a)) 
    {
        mid1=maxab(b,d);
        mid2=minab(b,d);
    }
    if ((max==c)&&(min==b)) 
    {
        mid1=maxab(a,d);
        mid2=minab(a,d);
    }
    if ((max==c)&&(min==d)) 
    {
        mid1=maxab(a,b);
        mid2=minab(a,b);
    }
    if ((max==d)&&(min==a)) 
    {
        mid1=maxab(c,b);
        mid2=minab(c,b);
    }
    if ((max==d)&&(min==b)) 
    {
        mid1=maxab(c,a);
        mid2=minab(c,a);
    }
    if ((max==d)&&(min==c)) 
    {
        mid1=maxab(a,b);
        mid2=minab(a,b);
    }
    cout<<"I will give you "<<min<<" "<<mid2<<" "<<mid1<<" "<<max<<endl;
    return 0;
}