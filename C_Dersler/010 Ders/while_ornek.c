#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int bitcoin;
	bitcoin = 100;

	while (bitcoin > 0)
	{
		printf("Elinde %d adet bitcoin var\n", bitcoin);
		bitcoin= bitcoin - 10;
	}
		printf("Elindeki bitcoinler bitti mıkı");
	return (0);
}
