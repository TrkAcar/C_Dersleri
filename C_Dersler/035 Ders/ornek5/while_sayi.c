#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	a;
	
	printf("Lutfen bir deger giriniz : \n");
	scanf("%d", &a);
	
	while (a >= 1)
	{
		printf("%3d",a);
		a--;
	}
}
