#include<stdio.h>

int main()
{

    int n,i;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        arr[i]= i+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d, ",arr[i]);
    }
    int x, pos;

    printf("this is a insertingjdfnvernvonadfvn")
    printf("\n enter the inserted value: ");
    scanf("%d",&x);
    printf("\n enter the inserted position: ");
    scanf("%d",&pos);

    arr[pos-1]=x;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
