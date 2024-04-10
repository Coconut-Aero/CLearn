#include <bits/stdc++.h>
using namespace std;
/*Informations
    This program is created by XiaoYi Zero on ASUS Vivobook Pro 16
    You can FREELY spread it base on GNU Public License.
    by XiaoYi Zero OpenSource Software Movement.
*/
int main()
{
    int grade[6], gradeAdd;
    int i=0, lowerAver=0;
    float gradeAver;
    while(i<=5)
    {
        cout<<"grade["<<i<<"]=";
        cin>>grade[i];  //输入grade
        cout<<endl;
        i++;
    }
    i=0;
    while(i<=5)
    {
        gradeAdd+=grade[i]; //求出grade总和
        i++;
    }
    gradeAver=gradeAdd / 6;
    i=0;
    while(i<=5)
    {
        if(grade[i]<gradeAver) lowerAver++;
        i++;
    }
    cout<<"Averange grade is: "<<gradeAver<<" and the student lower than averange grade have "<<lowerAver<<endl;
    return 0;
}