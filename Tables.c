#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d %d",&n,&a);
    for(i=1;i<=a;i+=2)
    {
        printf("%d x %d = %d
",n,i,(n*i));
    }
    return 0;
}