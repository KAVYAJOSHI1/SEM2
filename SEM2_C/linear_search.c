//LINEAR SEARCH,BINARY SEARCH
#include<stdio.h>
void main()
{
    int n;
    printf("ENTER THE SIZE OF THE ARRAY\n");
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
    int num;
    printf("ENTER THE ELEMENT TO BE SEARCHED");
    scanf("%d",&num);
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(num==a[i][j])
            {
                temp=1;
            }
        
        }
    }
    if(temp==1)
    {
         printf("SEARCH SUCCESSFULL");
    }
    else
     printf("SEARCH UNSUCCESSFULL");

    
}