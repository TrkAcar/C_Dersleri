#include <stdio.h>
#include <stdlib.h>

/*For Kullanırken 1 - Değer Ver 2 - Koşull 3 - Değer Verme Ve eksiltme */

int	main()
{
/*	int i;

	for(i=0;i<10;i++)
	{
		printf("%d\n", i);
	}
*/
	int	i;
	int	carpim=1;

	for(i=1;i<5;i++)
	{
		carpim= carpim * i;
	}
	printf("1 den %d'ye kadar olan sayıların çarpımı = %d",i,carpim);
}
