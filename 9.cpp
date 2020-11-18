#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=0,s=0,m=0,n=0;
	do{
		printf("ingresar el sueldo");
		scanf("%d",&s);
		if (s>2000){
			m=m+1;
	}
		else{
			n=n+1;
		}
		a++;
	}
	while(
	a<20);
	printf("hay %d que cobran mas de 2000 y %d que cobran menos",m,n);
}
