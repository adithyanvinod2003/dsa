#include <stdio.h>
#include <string.h>
int main()
{
    int a[10],b[10],c[10];int n1;
    //inputting polynomial 1
    printf("Enter number of terms of first polynomial: ");scanf("%d",&n1);
    int temp=0;
    for(int i=n1;i>=0;i--)
    {
        printf("Enter the coefficient of x^%d: ",temp);
        scanf("%d",&a[temp]);
        temp++;
    }
    //printing polynomial 1
    printf("\n");
    int j;
    for(int i=0,j=n1;i<=n1,j>=0;i++,j--)
    {   
        if(j==0)
        {
            printf("%d\n\n",a[i]);
        }
        else
        {
            printf("%dx^%d + ",a[i],j);
        }
    }

    //inputting polynomial 2
    int n2;
    printf("Enter number of terms of second polynomial: ");scanf("%d",&n2);
    int temp2=0;
    for(int i=n2;i>=0;i--)
    {
        printf("Enter the coefficient of x^%d: ",temp2);
        scanf("%d",&b[temp2]);
        temp2++;
    }
    //printing polynomial 1
    printf("\n");
    int j1=0;
    for(int i=0,j1=n2;i<=n2,j1>=0;i++,j1--)
    {   
        if(j1==0)
        {
            printf("%d\n\n",b[i]);
        }
        else
        {
            printf("%dx^%d + ",b[i],j1);
        }
    }    

    //adding polynomial
    int k=0;
    for(int i=n1,j=n2;i>=0,j>=0;i--,j--)
    {
        if(i==j)
        {
            printf("%dx^%d + ",a[i]+b[i],k);
        }
        elseif(n1>n2)
        {
            printf("%dx^%d + ",a[i],k);
        }
        else
        {
            printf("%dx^%d + ",b[i],k);
        }
    
    
        k++;
    }
        
       
    }
    

