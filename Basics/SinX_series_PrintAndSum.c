#include<stdio.h>
int main()
{
    int pass,term,i,j;
    double sum=0,x,pow,fact;
    printf("\n\t::sin(X) series::\n\tEnter the value of X and terms:");
    scanf("%lf%d",&x,&term);
    x*=(3.14159/180);
    for(pass=1;pass<=term;pass++)
    {
        pow=1.0; fact=1;
        for(i=1;i<=2*pass-1;i++)
        {
            pow*=x;
        }
        for(j=2*pass-1;j>0;j--)
        {
            fact*=j;
        }
        if(pass%2!=0)   sum=sum+(pow/fact);
        else sum=sum-(pow/fact);
    }
    printf("\n\tSUM = %lf",sum);
    return printf("\n\n\tPROGRAM EXECUTED SUCCESSFULLY");
}