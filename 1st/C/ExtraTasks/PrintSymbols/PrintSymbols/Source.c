#include <stdio.h>
#include <stdlib.h>

int main() {
	int l;
	int h;
	printf("Enter lenght: ");
	scanf_s("%d", &l);
	printf("Enter height: ");
	scanf_s("%d", &h);
	for(int i = 0; i < h; i++) 
	{
		for (int j = 0; j < l; j++)
		{
			printf("*");
		}

		printf("\n");
	}

}