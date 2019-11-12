#include <stdio.h>
void swap(int *x,int *y);

main()
{
    int a[100];
    int n,i,j;

    printf("amount of integers: ");
    scanf("%d",&n);

    printf("Enter values:\n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i]>a[j]){
                swap(&a[i],&a[j]);
            }
        }
    }
    printf("After sorting:\n");
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}

void swap(int *x,int *y)
{
    int temp;

    temp=*x;
    *x=*y;
    *y=temp;
}
