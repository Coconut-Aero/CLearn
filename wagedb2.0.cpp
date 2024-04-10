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
    char wage, floating_wages, Bonus, total_wages,ch;
    string cmd;
    FILE *fp1;
    save:
    i=0;
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
    i=0;
    fp1=fopen("./employee.dat","wb+");
    while(i<=4)
    {
        wage=char(person[i].wage);
        floating_wages=char(person[i].floating_wages);
        Bonus=char(person[i].Bonus);
        total_wages=char(person[i].total_wages);
        fputs(&wage,fp1);
        fputs("   ",fp1);
        fputs(&floating_wages,fp1);
        fputs("   ",fp1);
        fputs(&Bonus,fp1);
        fputs("   ",fp1);
        fputs(&total_wages,fp1);
        fputs("\n",fp1); 
        i++;       
    }
    start:
    cout<<"请输入您想要执行的操作。ADD=添加一个新员工；READ=读取全部数据；CHAN=修改某个员工的工资；SAVE=保存更改；EXIT=退出本程序"<<endl;
    cin>>cmd;
    if(cmd=="ADD")
    {
        cout<<"这个员工的姓名:";
        cin>>person[5].name;
        cout<<"基本工资:";
        cin>>person[5].wage;
        cout<<"浮动工资：";
        cin>>person[5].floating_wages;
        cout<<"奖金：";
        cin>>person[5].Bonus;
        person[5].total_wages=person[5].wage+person[5].floating_wages+person[5].Bonus;
        goto start;
    }
    else if(cmd=="READ")
    {
        while(!feof(fp1))
        {
            ch=fgetc(fp1);
            cout<<ch;
        }
        goto start;
    }
    else if(cmd=="CHAN")
    {
        cout<<"请输入您想要修改的员工的序号。";
        cin>>i;
        cout<<"新的基本工资：";
        cin>>person[i].wage;
        cout<<"新的浮动工资：";
        cin>>person[i].floating_wages;
        cout<<"新的奖金：";
        cin>>person[i].Bonus;
        person[i].total_wages=person[i].wage+person[i].floating_wages+person[i].Bonus;
        goto start;
    }
    else if(cmd=="SAVE")
    {
        goto save;
    }
    else if(cmd=="EXIT")
    {
        goto return0;
    }
    else
    {
        cout<<"不合法的命令。"<<endl;
        goto start;
    }
    return0:
    fclose(fp1);
    return 0;
}
