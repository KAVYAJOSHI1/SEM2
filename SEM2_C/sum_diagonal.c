//write a program to input matrix from user and find sum of diagonal elementa ,sum of upper diagonal elements,lower diagonal elements.
#include<stdio.h>
void main()
{
    int n;
    printf("ENTER THE SIZE OF MATRIX\n");
    scanf("%d",&n);
    int a[n][n];
    printf("ENTER THE ARRAY ELEMENTS\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("THE MATRIX IS :\n");
    
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",a[i][j]);

    }
    printf("\n");
    }
    int sum_l=0,sum_r=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum_l=sum_l+a[i][j];
            }
            if(i+j==n-1)
            {
                sum_r=sum_r+a[i][j];
            }
            }
    }
            printf("THE SUM OF LEFT DIAGONAL ELEMENTS IS %d\n",sum_l);
            printf("THE SUM OF RIGHT DIAGONAL ELEMENTS IS %d\n",sum_r);
        int sum_up=0;
        int  sum_low=0;
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                sum_up=sum_up+a[i][j];
            }
            if(i>j)
            {
                sum_low=sum_low+a[i][j];
            }
        }
    }
    printf("SUM OF UPPER TRIANGULAR MATRIX IS %d\n",sum_up);
    printf("SUM OF LOWER TRIANGULAR MATRIX IS %d\n",sum_low);
    



}
