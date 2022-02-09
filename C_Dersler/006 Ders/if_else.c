#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	a = 0;

	printf("Sayı Giriniz\n");
	scanf("%d", &a);

	if (a > 0)
	{
		printf("Girilen Sayi Pozitiftir");
	}
	else
	{
		printf("Girilen Sayi Negatiftir");
	}
	return 0;
}
