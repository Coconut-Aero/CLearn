#include<bits/stdc++.h>
using namespace std;     
int main()
{
    int i=1,n=5,j=0;
    char z='*',m=' ';
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
            printf(" ");
        for(j=n-i-1;j<n+i;j++)
            printf("*");
        printf("\n");
    }
}