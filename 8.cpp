#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=0,n=0,p=0,z=0,o=0;
do{
	printf(" ingrese un numero ");
	scanf("%d",&o);
	if (o>0){
		p=p+1;
	}
	else{
	 if (o>-1){
	 	z=z+1;
	 }
	 else {	n=n+1;}
	 };
a++;
}
while (a<10);
printf("hay %d positivos, %d zeros y %d negativos",p,z,n);
}
