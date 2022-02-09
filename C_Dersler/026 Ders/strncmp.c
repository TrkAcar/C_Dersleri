#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	int	sonuc;
	char	can[15]={"selo"};
	char	canan[15]={"sako"};

	sonuc=strncmp(can,canan,4);

	printf("%d",sonuc);
	return 0;

}
