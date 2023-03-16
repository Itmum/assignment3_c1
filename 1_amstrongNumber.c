#include<stdio.h>

int armstrong(int number)
{

    int n,i,lDigit,cnt=0;
//    scanf("%d",&number);
    n=number;
    while(n>0)
    {
        lDigit=n%10;
        cnt++;
        n=n/10;
    }
    int digit[cnt];
    int sum=0;
    if(cnt>0)
    {
        n=number;

        for(i=(cnt-1);i>=0;i--)
        {
            lDigit=n%10;
            digit[i]=pow(lDigit,cnt);
            n=n/10;
            sum=sum+digit[i];
        }

    }

//    for(i=0;i<cnt;i++)
//    {
//        printf(" %d ",digit[i]);
//    }
//    printf("%d",sum);
    if(sum==number)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }

    return 0;
}

int main()
{
    int z;
    printf("enter a number:");
    scanf("%d",&z);
    armstrong(z);
}
