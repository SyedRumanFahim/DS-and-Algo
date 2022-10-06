#include<stdio.h>
int main()
{
    int a[100], i, j, n, temp, count = 0;
    printf("How many numbers in the array : ");
    scanf("%d", &n);
    printf("\nEnter %d numbers: ",n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n-1;i++){
        if(a[i+1]<a[i]){
            temp = a[i+1];
            a[i+1] = a[i];
            a[i] = temp;
            count++;
        }
        else if(i==(n-2) && (count==0)){
            break;
        }
        if(i==(n-2)){
            i=-1;
            count = 0;
        }

    }
    printf("\nSorted array is: ");
    for(i=0;i<n;i++){
        printf("%d\t", a[i]);
    }

    return 0;
}