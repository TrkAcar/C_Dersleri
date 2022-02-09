#include <stdlib.h>
#include <stdio.h>

int	main()
{
	int	a,b,c,x;

	printf("Lutfen a b c ve x degerlerinin giriniz\n");
	scanf("%d%d%d%d",&a,&b,&c,&x);

	printf("ax^2 +bx + c degerim = %d", a*x*x+b*x+c);

	return 0;
}
