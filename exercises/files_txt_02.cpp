// g++ files_txt_02.cpp -o app
// ./app
// В текстовом файле abc.txt хранятся вещественные числа, вывести их на экран и вычислить их количество.

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream f; //Поток для чтения.
	float a; int n=0;
	f.open("abc.txt"); //Открываем файл в режиме чтения.
	if(f) //Если открытие файла прошло корректно, то
	{
		while(!f.eof()) //Организован цикл, выполнение цикла
		//прервётся, когда будет достигнут конца файла.
		{
			f >> a; //Чтение очередного значения из потока f в переменную a.
			cout << a << "\t"; //Вывод значения переменной a
			n++; //Увеличение количества считанных чисел.
		}
		f.close(); //Закрытие потока.
		cout << "n = " << n << endl; //Вывод на экран количества чисел.
	}
	else
        cout << "Файл не найден" << endl; //Если открытие файла прошло некорректно, то
	                                    //вывод сообщения, об отсутствии такого файла.
	return 0;
}