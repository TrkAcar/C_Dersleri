#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	int	sonuc;
	char	can[15]="abcdef";
	char	canan[15]="ABCDEF";

	sonuc=strcmp(can,canan);


	if(sonuc < 0)
	{
		printf("Can Canan dan kucuktur");
	}

	else if(sonuc > 0)
	{
		printf("Can Canan dan buyuktur");
	}

	else
	{
		printf("İkiside bırbırıne esıttır");
	}

	return (0);
}
