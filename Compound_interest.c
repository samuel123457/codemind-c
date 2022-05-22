#include<stdio.h>
#include<math.h>
int main()
{
    double p,t,r,ci,cc,x;
    scanf("%lf%lf%lf",&p,&r,&t);
    x=r/100.0;
    cc=pow((1+x),t);
    ci=p*cc;
    printf("%0.2lf",ci);
}