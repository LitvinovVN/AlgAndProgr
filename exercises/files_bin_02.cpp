// g++ files_bin_02.cpp -o app2
// ./app2
// Вывести на экран содержимое двоичного файла data.bin, содержащего целое число n и n вещественных чисел

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	FILE *f; //Описание файловой переменной.
	int i, n;
	f = fopen("data.bin", "rb"); //Открыть существующий двоичный файл в режиме чтения.
	fread(&n, sizeof(int), 1, f); //Читать из файла целое число в переменную n.
	cout << "n = " << n << endl; //Вывод n на экран.

	double *arr = new double[n]; //Выделение памяти для массива из n чисел.
	//Чтение n вещественных чисел размером sizeof(double) каждое из файла f в массив arr.
	fread(arr, sizeof(double), n, f);
	for (i = 0; i < n; i++) //Вывод массива на экран.
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	fclose(f); //Закрыть файл.
	return 0;
}