#pragma once
void main();
int UserInput();
int* CreateArray(int size);
int** CreateTwoDimArray(int columnsCount, int rowsCount);
int* FillInArray(int* arr, int size);
int** FillInTwoDimArray(int** arr, int columnsCount, int rowsCount);
void ShowArray(int* arr, int size);
void ShowTwoDimArray(int** arr, int columnsCount, int rowsCount);