#include<stdio.h>

int primefact(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                cnt++;
                n=n/i;
            }
            printf("%d^%d  ",i,cnt);
        }
    }
    if(n>1)
    {printf("%d^1",n);}
}

int main()
{

    int x;
    printf("enter a number:");
    scanf("%d",&x);
    primefact(x);
    return 0;
}
