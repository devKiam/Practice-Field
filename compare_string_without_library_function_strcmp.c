#include <stdio.h>

main()
{
    char a[99],b[99];
    int i,flag=1;

    printf("string a: ");
    gets(a);
    printf("string b: ");
    gets(b);

    for(i=0; a[i]!='\0' && b[i]!='\0'; i++){
        if(a[i]!=b[i]){
            flag=0;
            break;
        }
    }
    if(flag==0){
        printf("not same strings");
    }
    else{
        printf("same strings");
    }
}
