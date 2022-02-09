#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	char	can[]="Benim adim Tarik ACAR";
	char	canan[100];

	strcpy(canan,can); /* buradaki fonksiyon sağdaki değeri sola kopyalamaya yarıyor "=" mantığı gibi :D */

	printf("%s",canan);

	return 0;
}
