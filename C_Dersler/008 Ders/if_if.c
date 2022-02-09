#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	a,b;

	printf("Bir tam sayı giriniz\n");
	scanf("%d", &a);
	printf("Bir tam sayı giriniz\n");
	scanf("%d", &b);

	if(a%2==1)
	{
		if(b%2==1)
		{
			printf("Cıkan sayı tekdir\n");
		}
		else
		{
			printf("İlk girilen deger tek ikinci girelen deger cıfttir\n");
		}

	}
	else
	{
		if(b%2==0)
		{
			printf("Cıkan sayı cıfttir\n");
		}
		else
		{
			printf("İlk girilen deger cift ikinci girilen deger tekdir\n");
		}
	}
	return 0;
}
