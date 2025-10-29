#include<stdio.h>
int main()
{
  int num;
  printf("Enter the number:");
  scanf("%d",&num);
  if (num > 0)
  {
    printf("Positive Number");
  }
  else if (num < 0)
  {
     printf("Nevetive Number");
  }
  else
  {
    printf("Zero");
  }
return 0;
}