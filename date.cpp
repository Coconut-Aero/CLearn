#include<bits/stdc++.h>
using namespace std;
struct date
{
    int year;
    int month;
    int day;
}stu;
int main()
{
    cout<<"请输入年月日："<<endl;
    cout<<"年：";
    cin>>stu.year;
    cout<<"月：";
    cin>>stu.month;
    cout<<"日：";
    cin>>stu.day;
    bool run;
    int yeardiv1,yeardiv2,yeardiv3;
    yeardiv1=stu.year%4;
    yeardiv2=stu.year%100;
    yeardiv3=stu.year%400;
    if(((yeardiv1==0)&&(yeardiv2!=0))||((yeardiv1==0)&&(yeardiv2==0)&&(yeardiv3==0))) run=1;
    else run=0;
    int daylength=0,i=1;
    daylength+=stu.day;
    while(i<stu.month)
    {
        if(run==1)
        {
            switch(i)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    daylength+=31;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    daylength+=30;
                    break;
                case 2:
                    daylength+=29;
                    break;
                default:
                    break;
            }
            i++;
        }
        else 
        {
            switch(i)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    daylength+=31;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    daylength+=30;
                    break;
                case 2:
                    daylength+=28;
                    break;
            }
            i++;
        }
    }
    cout<<stu.year<<"年"<<stu.month<<"月"<<stu.day<<"日是这一年的第"<<daylength<<"天。"<<endl;
}