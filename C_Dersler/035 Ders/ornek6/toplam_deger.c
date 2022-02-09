#include <stdlib.h>
#include <stdio.h>

int	main()
{
	int	a;
	int	son;
	printf("Lutfen pozitif bir sayı girin : ");
	scanf("%d",&a);

	while(a >= 1)
	{
		printf("%d\n", a);
		a--;
	}
}
