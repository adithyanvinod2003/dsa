#include <stdio.h>
 typedef struct{
    int pow;
    int coeff;
 }poly;


 void main(){
    int n1,n2;
    printf("Enter the highest power of polynomial_1: ");scanf("%d",&n1);
    poly poly1[n1+1];
    for(int i=0; i<=n1; i++){
        printf("Enter the coeff of x^%d: ",i);scanf("%d",&poly1[i].coeff);
        poly1[i].pow = i;
    }
    printf("\n");
    for(int i=0; i<=n1; i++){
        printf(" %dx^%d +",poly1[i].coeff,poly1[i].pow);
    }
    printf("\n\n");
    printf("Enter the highest power of polynomial_2: ");scanf("%d",&n2);
    poly poly2[n2+1];
    for(int i=0; i<=n2; i++){
        printf("Enter the coeff of x^%d: ",i);scanf("%d",&poly2[i].coeff);
        poly2[i].pow = i;
    }
    printf("\n");
    for(int i=0; i<=n2; i++){
        printf(" %dx^%d +",poly2[i].coeff,poly2[i].pow);
    }
    printf("\n\n");

    int flag = 1,n3;

    if(n1>n2){
        n3 = n1;
    }
    else{
        n3 = n2;
    }
    printf("THE SUM OF BOTH THE POLYNOMIALS ARE :");
    for(int i=0; i<=n3; i++){
        if(poly1[i].pow == poly2[i].pow){
            printf(" %dx^%d +",poly1[i].coeff+poly2[i].coeff,poly1[i].pow);
        }
        else if(n1>n2){
            printf(" %dx^%d +",poly1[i].coeff,poly1[i].pow);
        }
        else{
            printf(" %dx^%d +",poly2[i].coeff,poly2[i].pow);
        }
    }
    printf("\n");

    
 }
