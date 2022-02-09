#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	char adam[]="tako";

	printf("Karakter dizinizin boyutu %d\n", strlen(adam));

	printf("Karakter dizinizin boyutu %d", sizeof(adam));

	return 0;
}
