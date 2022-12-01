#include <stdio.h>
#include <math.h>
typedef struct
{int coeff;int exp;}poly;

void main(){
    int size,x;
    printf("Enter the size of the polynomial:");scanf("%d",&size);
    poly p[size];
    for(int i=0; i<size; i++){
        printf("Enter the coefficient of the polynomial:");scanf("%d",&p[i].coeff);
        printf("Enter the exponent of the polynomial:");scanf("%d",&p[i].exp);
    }
    printf("\nEnter value to evaluate:");scanf("%d",&x);
    int res = 0;
    for(int i=0;i<size;i++){
        int temp = floorf(powf(x,p[i].exp));
        int expp = p[i].exp;
        int coefff = p[i].coeff;
        int temp1 = coefff*temp;
        res+=temp1;
    }
    printf("THE RESULT IS: %d",res);
}
