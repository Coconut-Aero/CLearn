#include<bits/stdc++.h>
using namespace std;
struct wagedb
{
    char name[10];
    int wage;
    int floating_wages;
    int Bonus;
    int total_wages;
}person[]=
{
    {"贾宇",2300,1980,2000},
    {"张莹",1908,2000,1000},
    {"李蒙",2490,1080,980},
    {"王同辽",980,1200,680},
    {"叶库伦",1290,1800,390}
};
int main()
{
    int i=0;
    int wageMaxPerson=0;
    while(i<=4)
    {
        person[i].total_wages=person[i].wage+person[i].floating_wages+person[i].Bonus;
        i++;
    }
    i=0;
    while(i<=4)
    {
        if(person[i].total_wages>person[wageMaxPerson].total_wages)
        {
            wageMaxPerson=i;
            i++;
        }
        else i++;
    }
    cout<<"拥有最高工资的人是"<<person[wageMaxPerson].name<<"，他的工资是"<<person[wageMaxPerson].total_wages<<endl;
    return 0;
}