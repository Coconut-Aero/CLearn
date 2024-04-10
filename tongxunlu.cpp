#include<bits/stdc++.h>
using namespace std;
struct infopeople
{
    char name[100];
    char address[100];
    long phone;
}stu[100];
int main()
{
    int i,n=0;
    cout<<"请输入通讯录中的条目总数，不大于100条。"<<endl;
    cin>>i;
    while(n<=i-1)
    {
        cout<<"请输入第"<<n+1<<"个人的姓名";
        cin>>stu[n].name;
        cout<<"请输入第"<<n+1<<"个人的地址";
        cin>>stu[n].address;
        cout<<"请输入第"<<n+1<<"个人的电话号码";
        cin>>stu[n].phone; 
        n++;
    }
    char findName;
    cout<<"请输入需要查找的人的名字"<<endl;
    cin>>findName;
    n=0;
    while(n<=i-1)
    {
        if(findName==*stu[n].name)
        {
            cout<<"找到了。这个人的地址是 "<<stu[n].address<<" ，这个人的电话号码是 "<<stu[n].phone<<endl;
            goto ending;
        }
        else
        {
            n++;
        }
    }
    cout<<"通讯录里面没有这个人。"<<endl;
    ending:
    return 0;
}