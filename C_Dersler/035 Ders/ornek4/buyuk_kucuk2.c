#include <stdlib.h>
#include <stdio.h>

int	main()
{
	int	a,b;

	printf("Lutfen 2 adet sayi giriniz :\n");
	scanf("%d%d", &a,&b);

	if(a==b)
	{
		printf("Sayılarınız esittir\n");
	}
	else
	{
		printf("Sayılarınız esitt degildir\n");

		if(a<b)
		{
			printf("%d kucuktur %d den", a,b);
		}
		else
		{
			printf("%d buyuktur %d den", a,b);
		}
		printf("\n");
	if(a%b==0)
	{
		printf("%d %d in katidir", a,b);
	}
	else
	{
		printf("%d %d in kati degildir", a,b);
	}
	}
	
	return 0;
}
