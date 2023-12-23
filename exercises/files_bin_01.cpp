// g++ files_bin_01.cpp -o app1
// ./app1
// Создать двоичный файл data.bin, куда записать целое число n и n вещественных чисел

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	FILE *f; //Описание файловой переменной.
	int i, n; double a;
	f = fopen("data.bin", "wb"); //Создание двоичного файла в режиме записи.
	cout<<"n = "; cin>>n; //Ввод числа n.
	fwrite (&n, sizeof(int), 1, f); //Запись числа в двоичный файл.
	for (i = 0; i < n; i++) //Цикл для ввода n вещественных чисел.
	{
		cout << "a = "; cin>>a; //Ввод очередного вещественного числа.
		fwrite(&a, sizeof(double), 1, f); //Запись числа в двоичный файл.
	}
	fclose(f); //Закрыть файл.
	return 0;
}