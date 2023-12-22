// g++ files_bin_03.cpp -o app
// ./app
// В созданном в задаче files_bin_01.cpp двоичном файле data.bin поменять местами наибольшее и наименьшее из вещественных чисел

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	FILE *f; //Описание файловой переменной.
	int n, imax, imin;
	double max, min;
	f = fopen("data.bin", "rb+"); //Открыть файл в режиме чтения и записи.
	fread(&n, sizeof(int), 1, f ); //Считать из файла в переменную n количество элементов в	файле.
	double *arr = new double[n]; //Выделить память для хранения вещественных чисел,
	//эти числа будут хранится в массиве arr.
	fread(arr, sizeof(double), n, f); //Считать из файла в массив arr вещественные числа.
	//Поиск максимального max, минимального min элемента в массиве arr, и их индексов imax и imin.
	imax = imin = 0;
	max = min = arr[0];
	for(int i = 1; i < n; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			imax = i;
		}
		if(arr[i] < min )
		{
			min = arr[i];
			imin = i;
		}
	}
	//Перемещение указателя к максимальному элементу.
	fseek(f, sizeof(int) + imax * sizeof(double), SEEK_SET);
	//Запись min вместо максимального элемента файла.
	fwrite(&min, sizeof(double), 1, f);
	//Перемещение указателя к минимальному элементу.
	fseek(f, sizeof(int) + imin * sizeof(double), SEEK_SET);
	//Запись max вместо минимального элемента файла.
	fwrite (&max, sizeof(double), 1, f);
	//Закрытие файла.
	fclose(f);
	//Освобождение памяти, выделенной под массив a.
	delete[] arr;
	return 0;
}