#include <bits/stdc++.h>
using namespace std;
/*Informations
    This program is created by XiaoYi Zero on ASUS Vivobook Pro 16
    You can FREELY spread it base on GNU Public License.
    Powered by XiaoYi Zero OpenSource Software Movement.
*/
int maxab(int a,int b)
{
    if(a>b) return a;
    else return b;

}
int main()
{
    int person[5][5];
    int i=0, j=0;
    int imax, jmax, wagemax;
    bool exit;
    while(exit==0)
    {
        cout<<"person["<<i<<"]["<<j<<"]"<<"=";
        cin>>person[i][j];
        if(j<=3) j++;
        if((j==4)&&(i<4))
        {
            i++;
            j=0;
        }
        if((j==4)&&(i==4)) //达到最后一个值，退出
        {
            exit=1;
        }
    }
    i=0;
    j=0;
    exit=0;
    while(exit==0)
    {
        person[i][4]=person[i][1] + person[i][2] + person[i][3];
        if(i<5) i++;
        if(i==5) exit=1;
    }
    i=0;
    j=0;
    exit=0;
    while(exit==0)
    {
        if(i==0) 
        {
            wagemax=person[0][4];
            i=1;
            imax=0;
        }
        if((i>=1)&&(i<5))
        {
            wagemax=maxab(wagemax , person[i][4]);
            i++;
        }
        if(i==5)
        {
            i=0;
            while(exit==0)
            {
                if(wagemax==person[i][4])
                {
                    exit=1;
                    imax=i;
                }
                else i++;
            }
        }
    }
    cout<<"The maxium of wage is person "<<person[imax][0]<<" whose wage is "<<wagemax;
    return 0;
}