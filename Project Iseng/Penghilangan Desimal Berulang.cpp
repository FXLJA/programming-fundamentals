#include <stdio.h>

main ()
{
	int n;
	scanf("%d",&n);
	if (n % 111 == 0){
		printf("0,%d...",n/111);
	}
	else if (n < 10) {
		printf("0,00%d...",n);
	}
	else if (n < 100){
		printf("0,0%d...",n);
	}
	else if (n < 1000){
		printf("0,%d...",n);
	}
}
