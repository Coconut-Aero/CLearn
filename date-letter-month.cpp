#include<bits/stdc++.h>
using namespace std;

enum monthnum
{
    January=1,February=2,March=3,April=4,May=5,June=6,July=7,August=8,September=9,October=10,November=11,December=12
}realmonth;

struct date
{
    int year;
    char month[13];
    int day;
}stu;

int main()
{
    cout<<"Enter the date."<<endl;
    cout<<"Month:";
    cin>>stu.month;
    cout<<"Date:";
    cin>>stu.day;
    cout<<"Year:";
    cin>>stu.year;
    bool run;
    int yeardiv1,yeardiv2,yeardiv3;
    yeardiv1=stu.year%4;
    yeardiv2=stu.year%100;
    yeardiv3=stu.year%400;
    if(((yeardiv1==0)&&(yeardiv2!=0))||((yeardiv1==0)&&(yeardiv2==0)&&(yeardiv3==0))) run=1;
    else run=0;
    int daylength=0,i=1;
    daylength+=stu.day;
    if(stu.month[0]=='J')
    {
        if(stu.month[1]=='a')
        {
            realmonth=January;
        }
        else if(stu.month[1]=='u')
        {
            if(stu.month[2]=='n')
            {
                realmonth=June;
            }
            else if(stu.month[2]=='l')
            {
                realmonth=July;
            }
        }
    }
    else if(stu.month[0]=='F')
    {
        realmonth=February;
    }
    else if(stu.month[0]=='M')
    {
        if(stu.month[2]=='y')
        {
            realmonth=May;
        }
        else if(stu.month[2]=='r')
        {
            realmonth=March;
        }       
    }
    else if(stu.month[0]=='A')
    {
        if(stu.month[1]=='p')
        {
            realmonth=April;
        }
        else if(stu.month[1]=='u')
        {
            realmonth=August;
        }
    }
    else if(stu.month[0]=='S')
    {
        realmonth=September;
    }
    else if(stu.month[0]=='O')
    {
        realmonth=October;
    }
    else if(stu.month[0]=='N')
    {
        realmonth=November;
    }    
    else if(stu.month[0]=='D')
    {
        realmonth=December;
    }
    while(i<realmonth)
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
    cout<<stu.month<<" "<<stu.day<<","<<stu.year<<" is the "<<daylength<<" day of this year."<<endl;
}