#include<stdio.h>
int performOR(int a, int b)
{
    return a | b;
}

int performAnd(int a, int b)
{
    return a & b;
}
int performXOR(int a, int b)
{
    return a ^ b;
}

void calculateBinary(int b)
{
    int c[32],i=0;
    while(b)
    {
        c[i] = b%2;
        b = b/2;
        i++;
    }

    for(i=i-1;i>=0;i--){
        printf("%d", c[i]);
    }
    
    printf("\n");
}

int main()
{
    int a, b, t;
    while(1)
    {
        printf("And/Or/Binary/Xor - 1/2/3/4: ");
        scanf("%d", &t);
        if(t==0){
            break;
        }

        if(t==2){
            printf("\nEnter two number: ");
            scanf("%d %d", &a, &b);
            printf("%d | %d = %d\n", a, b, performOR(a,b));
        }
        else if(t==1){
            printf("\nEnter two number: ");
            scanf("%d %d", &a, &b);
            printf("%d & %d = %d\n", a, b, performAnd(a,b));
        }
        else if(t==3){
            printf("Enter a decimal number to convert : ");
            scanf("%d", &b);
            calculateBinary(b);
        }
        else if(t==4){
            printf("\nEnter two number: ");
            scanf("%d %d", &a, &b);
            printf("%d & %d = %d\n", a, b, performXOR(a,b));
        }
    }

    return 0;


}