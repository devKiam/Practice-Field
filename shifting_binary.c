#include <stdio.h>
#include <math.h>

main()
{
    int m,n,a,b;

    printf("Enter binary number: ");
    scanf("%d", &m);
    printf("n?\n");
    scanf("%d",&n);

    a=m<<n;
    b=m*pow(2,n);

    printf("using bitwise shift operator: %d\n",a);
    printf("multiplying the number with 2^n: %d\n",b);
    if(a==b){
        printf("They are equivalent\n");
    }
    else{
        printf("Experiment unsuccessful");
    }
}
