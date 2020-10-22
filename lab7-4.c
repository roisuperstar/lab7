#include <stdio.h>
main()
{
	int i, max, min;
	int a[5];
	max = a[0];
	min = a[0];

	printf("Moi nhap day so: \n");
    for (i = 0; i < 5; i++)
    {
    	scanf("%d", &a[i]);	
	}
    for (i = 0; i < 5; i++)	
    {
    	if (max < a[i+1])
            max = a[i+1];
	}
    for (i = 0; i < 5; i++)    		
	{
		if (min > a[i+1])
            min = a[i+1];	
	}
    printf("So lon nhat trong mang la: %d", max);
	printf("\nSo be nhat trong mang la: %d", min);
}
