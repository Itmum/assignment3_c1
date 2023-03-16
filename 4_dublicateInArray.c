#include <stdio.h>
int main()
{
    int i,j,n,count=0 ;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }  
    for(i=0; i<n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
        if(arr[i] == arr[j])
            {
            count++;
            break;
            }
        }
    }
    printf("Total duplicate numbers in the array: %d",count);
    return 0;
}