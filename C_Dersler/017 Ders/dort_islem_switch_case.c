#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char op;
	float a,b;

	printf("Lutfen bir adet operator girin %c\n", op);
	scanf("%c", &op);

	printf("Lutfen iki adet sayi giriniz\n", a,b);
	scanf("%f%f", &a,&b);

	switch(op)
	{
		case '+' :printf("%.2f + %.2f = %.2f", a,b,a+b);
		break;
		case '-' :printf("%.2f - %.2f = %.2f", a,b,a-b);
		break;
		case '*' :printf("%.2f * %.2f = %.2f", a,b,a*b);
		break;
		case '/' :printf("%.2f / %.2f = %.2f", a,b,a/b);
		break;
		default :printf("Böyle Bir İşlem yok D:");
		break;
	}
	return (0);
}
