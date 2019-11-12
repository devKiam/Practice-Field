#include <stdio.h>

main()
{
  char source[999],destination[999];
  int i,length1;

  printf("Enter source string: ");
  gets(source);
  length1=strlen(source);

  for(i=0; i<length1,source[i]!='\0'; i++){
    destination[i]=source[i];
  }
  destination[i]='\0';

  printf("destination: %s",destination);
}
