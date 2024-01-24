#include<stdio.h>
void main()
{
    int n;
    printf("ENTER THE SIZE OF THE ARRAY");
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    int c[n][n];
    printf("ENTER THE ARRAY ELEMENTS FOR MATRIX A");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER THE ARRAY ELEMENTS FOR MATRIX B");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("SUM OF ARRAY IS\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }



    
}