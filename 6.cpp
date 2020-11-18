#include <stdio.h>
#include <stdlib.h>
int main()
{
	float Pro1=1,Pro2=1;
int Pro1s=0,Pro2s=0,c=1,b=1,n=0,d=1;
while(c<30)
{
do{
printf("\n ingrese la nota num %d ",d);
scanf("%d",&n);
Pro1s=Pro1s+n;
b++;
d++;
if(d>10)
{d=1; }
}
while(b<11);
	Pro1=Pro1s/10;
	printf("promedio de alumno %f ",Pro1);
    Pro2s=Pro2s+Pro1s;
	c++;
	if(b>10)
{b=1;
Pro1s=0; }		
}
Pro2=Pro2s/30;
printf("promedio de la clase es %d ",Pro2);
}
