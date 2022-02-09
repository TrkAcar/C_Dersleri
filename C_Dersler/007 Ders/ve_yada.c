/* && Ve
   || Veya
   !  Değil
*/

#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int yas;
	int ugurlu_sayi;

	printf("Yasınızı Girin\n");
	scanf("%d", &yas);

	printf("Ugurlu Saıynızı Girin\n");
	scanf("%d", &ugurlu_sayi);

	if (((yas > 30) && (yas < 60)) || (ugurlu_sayi == 13))
	{
		printf("Bravo");
	}
	return 0;

}
