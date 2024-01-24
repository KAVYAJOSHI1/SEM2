#include<stdio.h>
void main()
{
    int n,m;
    printf("ENTER THE SIZE OF ROW");
    printf("ENTER THE SIZE OF COLUMN");
    scanf("%d",&n);
    scanf("%d",&m);
     int a[n][m];
    int b[n][m];
    int c[n][m];
    printf("ENTER THE ARRAY ELEMENTS FOR MATRIX A");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER THE ARRAY ELEMENTS FOR MATRIX B");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
    c[i][j]=a[i][j]+a[i][k]*b[k][j];
        }
    }

}
printf("PRODUCT ARRAY IS :\n");
  for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }





}