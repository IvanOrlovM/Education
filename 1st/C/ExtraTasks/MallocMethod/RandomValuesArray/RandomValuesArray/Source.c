#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Source.h"

void main()
{
	srand(time(NULL));

	int size = UserInput();
	
	int *arr = CreateArray(size);

	// two - dimensional array
	int **twoDimArr = CreateTwoDimArray(3, 4);

	FillInArray(arr, size);

	// FillInTwoDimArray(size, size);

	ShowArray(arr, size);

	free(arr);
}

int UserInput() 
{
	int size;
	printf("Enter size of array: ");
	scanf_s("%d", &size);
	return size;
}

int* CreateArray(int size) 
{
	int* arr = malloc(size * sizeof(int));
	return arr;
}

int** CreateTwoDimArray(int columnsCount, int rowsCount)
{
	// указатель для блока памяти для массива указателей
	int** table;

	// выделяем память для двухмерного массива
	table = calloc(rowsCount, sizeof(int*));
	
	for (int i = 0; i < rowsCount; i++)
	{
		table[i] = CreateArray(columnsCount);
	}

	return table;
}

int* FillInArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
	}

	return arr;
}

void ShowArray(int*arr, int size) 
{
	for (int i = 0; i < size; i++)
	{
		printf("arr[%d]=", i);
		printf("%d\n", arr[i]);
	}

	printf("\n");
}

// реализовать пользовательский ввод 12:34 - 12:39
// создать массив размерностью пользовательского ввода 12:40 - 12:58
// заполнить массив случайными значениями 13:20 - 13:31
// рефакторинг 13:47 - 14:30
// изменить массив на двумерный 15:07