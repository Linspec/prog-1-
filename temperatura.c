#include <stdio.h>
int main()
{
float tf,tc;

printf("\n entre com um valor");

scanf("%f",&tf);

tc=(float)((tf-32)/1.8);
printf("\n conversão=%.0f\n",tc);
system("pause");
return 0;
}
