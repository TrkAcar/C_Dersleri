#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	can[] ={'t','a','k','o','\0'};
	
	char dizim[]="tako";

	char kullanici[100];

//	printf("%s", can);

	printf("%s", dizim);

	printf("Lutfen bir karakter dizisi girin\n");
	scanf("%s", &kullanici);

	printf("\n");
	printf("%s", kullanici);
	return 0;
}
