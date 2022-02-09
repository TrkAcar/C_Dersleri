#include <stdio.h>
#include <stdlib.h>

void	tekmiciftmi(int tako) /* değişkenadi	bizimverdiğimiz değişkenadi(değişken bizimverdiğimzad) */
{
	if(tako%2==0)
	{
		printf("Sayimiz cift sayidir");
	}
	else
	{
		printf("Sayimiz tek sayıdır");
	}
}

int	main()
{
	int	sayi;

	printf("Lutfen bir sayi giriniz\n");
	scanf("%d",&sayi);
	tekmiciftmi(sayi); /*İlk olarak fonksiyonumuza vereceğimiz adı yazıyoruz sonra kullanıcıdan girilen değerin adı yazılıyor Örn : fonksiyonadi(alınacakdegeradi) */

/*	if(sayi%2==0)
	{
		printf("Sayimiz cift sayidir");
	}
	else
	{
		printf("Sayimiz tek sayidir");
	} */
	return 0;
}
