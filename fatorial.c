#include <stdio.h>
int main()
{
    int fat,num,i;
    
     printf("\n coloque um numero:");
     scanf("%d",&num);    
     fat=1;
     for(i=1;i<=num;i++)
     {
      fat=fat*i;
     }
     printf("\n Fat (%d)=%d",num,fat);
     system("pause");
     return 0; 
}
