#include <stdlib.h>
#include <stdio.h>

int	tekmiciftmi(int tako)
{
	if(tako%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int	main()
{	
	int	sayi,sonuc;
	printf("Lutfen bir sayi giriniz\n");
	scanf("%d",&sayi);
	sonuc=tekmiciftmi(sayi);

	if(sonuc==0)
	{
		printf("Sayimiz cift sayidir");
	}
	if(sonuc==1)
	{
		printf("Sayimiz tek sayidir");
	}
	return 0;
}
