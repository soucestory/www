
#include <stdio.h>

int main(void)
{
	int i, n;
	int dec;
	int bin[8];
	n = sizeof(bin) / sizeof(int);

	while( 1 )
	{
	
		do {
			printf("\n 10진수입력(0~255) : ");
			scanf("%d", &dec);
			if( dec == 100 )
			 return 0;
		} while (dec < 0 || dec > 255);
	
		for (i = n - 1; i >= 0; i--)
		{
			bin[i] = dec % 2;
			dec /= 2;
		}
	
		printf("\n\t[ ");
	
		for (i = 0; i<n; i++)
		{
			printf("%d", bin[i]);
		}
	
		printf(" ]\n");

	}
	return 0;
}


