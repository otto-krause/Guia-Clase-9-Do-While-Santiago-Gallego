#include <stdio.h>
#include <stdlib.h>
int main()
#include <stdio.h>
#include <stdlib.h>


int main()
{
  int b=0,c=1,N=0,d=0,Uv=0,e=0;
do
{
 Uv=0;
  printf ("El vendedor: %d ",c);
  printf (" \n Ingresar las unidades vendidas ");
c++;
b=0;
d=0;
do
{
printf (" venta del dia %d \n",c);
scanf ("%d",&Uv);
 d=d+Uv;
  if (d>N)
 N=d;
 b++;
}
while(b<15);
e=e+d;
  printf ("EL total  de unidades vendidas  del vendedor %d es %d ",c-1,d);
}
while (c<21);
printf("el total general es %d ",e);
printf ("el vendedor con mayor venta diaria tiene %d",N);
}
