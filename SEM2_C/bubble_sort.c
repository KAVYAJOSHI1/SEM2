//BUBLE SORT ON 15 ELEMENTS ,TAKE INPUT FROM USER.
#include<stdio.h>
void main()
{
    int n;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d",&n);
    int a[n];
    printf("ENTER THE ARRAY ELEMENTS\n");
    for(int i=0;i<n;i++)
    {
        
            scanf("%d",&a[i]);
        }
    
  
    
int temp=0;
  for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
           
        }
        }
    }
    printf("THE SORTED ARRAY IS:\n");
        for(int i=0;i<n;i++)
    {
     printf("%d",a[i]);
    }
}
    