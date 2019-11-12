#include <stdio.h>

main()
{
    int i, lengthI;
    char word[100];

    printf("Enter word: ");
    gets(word);
    lengthI=strlen(word);
    for(i=1; i<lengthI; i++){
      printf("%c",word[i]);
    }
    putchar(word[0]);
    putchar('a');
    putchar('y');
}
