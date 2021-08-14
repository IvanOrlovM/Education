#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int size;
	printf("Enter size of array: ");
	scanf_s("%d", &size);
	
	int *arr = malloc(size * sizeof(int));
	
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		printf("arr[%d]=", i);
		arr[i] = rand();
		printf("%d\n", arr[i]);
	}

	printf("\n");
	free(arr);
}

// реализовать пользовательский ввод 12:34 - 12:39
// создать массив размерностью пользовательского ввода 12:40 - 12:58
// заполнить массив случайными значениями 13:20 - 13:31