#include <stdio.h>
//global structure
struct identity{
  char name[30];
  char address[99];
};

main()
{
  struct identity id[3];
  int i,j;
  char temp[99];

  for(i=0; i<3; i++){
    printf("Identity no. %d\n", i+1);
    printf("Name: ");
    gets(id[i].name);

    printf("Address: ");
    gets(id[i].address);
  }

  for(i=0; i<3; i++){
    for(j=i+1; j<3; j++){
      if(strcmp( id[i].name , id[j].name ) > 0){
//swaping names
        strcpy(temp,id[i].name);
        strcpy(id[i].name,id[j].name);
        strcpy(id[j].name,temp);
/* swaping address bc of
names those I swaped */
        strcpy(temp,id[i].address);
        strcpy(id[i].address,id[j].address);
        strcpy(id[j].address,temp);

      }
    }
  }
  printf("\n\nAfter sorting\n");
  for(i=0; i<3; i++){
    printf("\nIdentity no. %d", i+1);
    printf("\nName: %s\n",id[i].name);
    printf("Address: %s\n",id[i].address);
  }
}
