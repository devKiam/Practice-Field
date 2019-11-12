#include <stdio.h>
int sum(int n);

main()
{
    int n,s;
    printf("Enter: ");
    scanf("%d",&n);
    s=sum(n);
    printf("%d",s);
}
int sum(int n)
{
    if(n==0){
        return 0;
    }
    else{
        n+=sum(n-1);
    }
    return(n);
}
