#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int N=0;
void calc(int n,int i,int dN)
{
    for(; i<=n+1; i++)
        if(n<8) calc(n+1,i+1,dN);
        else
            N+=dN;
}
int main()
{
    int n,i,j;
    for(n=0,i=1; i<=26; i++)
        for(j=i+1; j<=27; j++) n++;
    calc(1,1,n);
    printf("N=%d\n",N);
    system("pause");
    return 0;
}