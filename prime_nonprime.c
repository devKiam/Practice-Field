#include <stdio.h>

main()
{
    int i,n,flag=0;

    printf("Enter: ");
    scanf("%d",&n);

    for(i=2; i<=n/2; i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(n==1){
        printf("non-prime");
    }
    else if(n==0){
        printf("zero is nothing");
    }
    else if(flag==0){
        printf("prime");
    }
    else{
        printf("non-prime");
    }
}
