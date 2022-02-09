#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main()
{
	char	c1[15];
	char	c2[15];
	char	cikti[15];

	strcpy(c1,"bonne");
	strcpy(c2,"soiree");

	strncpy(cikti,c1,3);
	strncat(cikti,c2,5);
	

	printf("%s",cikti);

	return 0;

}
