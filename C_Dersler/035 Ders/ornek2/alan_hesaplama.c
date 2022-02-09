#include <stdio.h>						// Taban alan : a*b
#include <stdlib.h>					       // Yanal alan : 2a.h + 2b.h
							      // Toplam alan : 2a.h + 2b.h + 2a.b	
int	main()						     // Hacim : a*b*h
{
	int	a,b;
	int	h;

	printf("Lutfen 2 adet kenar uzunlugu giriniz\n");
	scanf("%d%d",&a,&b);
	
	printf("Lutfen 1 adet uzunluk giriniz\n");
	scanf("%d",&h);

	printf("Taban alani : %d\n", a*b);
	printf("Yanal alan : %d\n", 2*a*h + 2*b*h);
	printf("Toplam alan : %d\n", 2*a*h + 2*b*h + 2*a*b);
	printf("Hacim : %d\n", a*b*h);

	return 0;
}
