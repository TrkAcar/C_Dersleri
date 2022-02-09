#include <stdlib.h>
#include <stdio.h>

int	main()
{
	int	a,b,c;
	int	max,mini;
	printf("3 Adet sayı giriniz :\n");
	scanf("%d%d%d", &a,&b,&c);
	
	max=a;
	if(max<b)
	{
		max=b;
	}
	if(max<c)
	{
		max=c;
	}
	printf("Maximum Değerimiz %d\n", max);

	mini=a;
	if(mini>b)
	{
		mini=b;
	}
	if(mini>c)
	{
		mini=c;
	}
	printf("Minimum Değerimiz %d", mini);
	return 0;
}
