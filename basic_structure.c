#include <stdio.h>

struct family{
  char name[30];
  int age;
  char last_deg[30];
  char occupation[30];
  double salary;
};

main()
{
  struct family fam;

  printf("Name: ");
  gets(fam.name);

  printf("Age: ");
  scanf("%d",&fam.age);
  getchar();

  printf("Last degree: ");
  gets(fam.last_deg);

  printf("Occupation: ");
  gets(fam.occupation);

  printf("Salary: ");
  scanf("%lf",&fam.salary);

  printf("\n\n%s\n",fam.name);
  printf("%d\n",fam.age);
  printf("%s\n",fam.last_deg);
  printf("%s\n",fam.occupation);
  printf("%0.2lf\n",fam.salary);
}
