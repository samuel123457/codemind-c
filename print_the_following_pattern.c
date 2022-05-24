#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    sam:
    for(i=n;i>0;i--)
    {
        printf("%d",i);
        printf(" ");
        c++;
    }
printf("
");
//printf("%d",c);
if(c<n*n)
{
    goto sam;
}
/*else
{
    printf("no");
}*/
return 0;
}