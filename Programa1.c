#include<stdio.h>
int main ()
{
  int a, b;
  a = 3;
  b = 2;
  if (a > b)
  {  
    printf("\ta (%d) es mayor a b (%d).\n",a,b);
  }
  printf("\tEl programa sigue su flujo.\n");
  return 0;
}

Modificación que le hcimos durante la práctica:
#include<stdio.h>
int main ()
{
  int a, b;
  a = 1;
  b = 5;
  if (a > b)
  {  
    printf("\ta (%d) es mayor a b (%d).\n",a,b);
  }
  printf("\tEl programa sigue su flujo.\n");
  return 0;
}
