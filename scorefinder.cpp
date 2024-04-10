#include<bits/stdc++.h>
using namespace std;
const int N=5, M=10;
struct
{
    char name[10];
    float score;
}str[N];
int main()
{
    char anyname[10];
    int i=0, p=0, q=0,max,min, maxplace=0, minplace=0, total=0, ave, anyscore;
    while(i<N)
    {
        cout<<"请输入第"<<i+1<<"个学生的姓名：";
        cin>>str[i].name;
        cout<<"请输入第"<<i+1<<"个学生的分数：";
        cin>>str[i].score;
        i++;
    }
    i=0;
    max=str[0].score;
    min=str[0].score;
    while(i<N)
    {
        if(str[i].score>max) 
        {
            maxplace=i;
        }
        if(str[i].score<min)
        {
            minplace=i;
        }
        total+=str[i].score;
        i++;
    }
    ave=total/N;
    cout<<"最高成绩的人是"<<str[maxplace].name<<"，他的成绩是"<<str[maxplace].score<<"。"<<endl;
    cout<<"最低成绩的人是"<<str[minplace].name<<"，他的成绩是"<<str[minplace].score<<"。"<<endl;
    cout<<"平均分是"<<ave<<endl;
    cout<<"请输入一个人的名字，查询他的分数是否高于平均分。"<<endl;
    cout<<"他的名字是：";
    cin>>anyname;
    i=0;
    while(q<M&&anyname[q]!='\0')
    {
        q++;
    }
    while(i<N)
    {
        while(p<=q)
        {
            if(anyname[p]==str[i].name[p])
            {
                p++;
            }
            else break;
            if(p=q+1)
            {
                anyscore=str[i].score;
                goto out;
            }
        }
        i++;
    }
    cout<<"我们没有找到这个人。"<<endl;
    return 0;
    out:
    if(anyscore>ave) cout<<"这个人的成绩高于平均分。";
    else if(anyscore<ave) cout<<"这个人的成绩低于平均分。";
    else cout<<"这个人的成绩等于平均分。";
    return 0;
}