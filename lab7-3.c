#include <stdio.h>
main()
{
	int num[5];
	int i;
	printf("Moi nhap day so: ");
	for (i=0; i<5; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("Thu tu dao nguoc: ");
	for (i=4; i>=0; i--)
	printf("%d \n", num[i]);
}
