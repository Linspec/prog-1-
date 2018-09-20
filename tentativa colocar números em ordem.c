#include <stdio.h>
int main()
{
  int n1,n2,n3;
  printf("\n Escreva um numero:");
  scanf("%d",&n1);
  printf("\n escreva um numero:");
  scanf("%d",&n2);
  printf("\n escreva um numero:");
  scanf("%d",&n3);
  if(n1>n2>n3)
 {
  printf("\n %d,%d,%d",n1>n2>n3);
 }
  else if(n1>n3>n2)
 {
  printf("\n %d,%d,%d",n1>n3>n1);
 }
  else if(n2>n1>n3)
 {
  printf("\n %d,%d,%d",n2>n1>n3);
 }
  else if(n2>n3>n1)
 {
  printf("\n %d,%d,%d",n2>n3>n1);
 }
  else if(n3>n1>n2)
 {
  printf("\n %d,%d,%d",n3>n1>n2);
 }
  else if(n3>n2>n1)
 {
  printf("\n %d,%d,%d",n3>n2>n1);
 }
 system("pause");
 return 0;
}

