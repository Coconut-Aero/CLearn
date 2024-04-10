#include<bits/stdc++.h>
using namespace std;
#define LEAP_YEAR(y) y%4
int main()
{
    int year;
    cin>>year;
    if(LEAP_YEAR(year)==0)
        printf("%d is a leap year.", year);
    else
        printf("%d is not a leap year.", year);
    return 0;
}