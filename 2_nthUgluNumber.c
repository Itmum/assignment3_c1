#include<stdio.h>
#include<stdbool.h>

int div(int a, int b)
{
    while (a % b == 0)
        a = a / b;
    return a;
}
bool isUgly(int n)
{
    n = div(n, 2);
    n = div(n, 3);
    n = div(n, 5);
    if(n==1)
    {
        return true;
    }
    else
    {
        return false ;
    }
}

int main()
{

    int n,cnt=1,i;
    printf("enter nth number:");
    scanf("%d",&n);
    for(i=1;cnt<n;)
    {
        i++;
        if(isUgly(i)==true)
        {
            cnt++;
        }
    }
    printf("%d  \n",i);

    return 0;
}
