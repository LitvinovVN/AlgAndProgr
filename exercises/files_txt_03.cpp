// g++ files_txt_03.cpp -o app
// ./app

// 1. Запрашиваем у пользователя имя файла с данными
// 2. Запрашиваем у пользователя размер кол-во данных N
// 3. Записываем размер данных n в файл
// 4. Считываем n данных запрашивая их у пользователя
// 5. И записать в файл текстовый
// 6. Считываем из файла конфиг массив файла n
// 7. Создаем массив динамический n файлов и в него считываем данные


#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int inputIntGt0(string message, string errorMessage)
{
	int n;
	while(1)
	{
		cout << message;
		cin >> n;
		if (n > 0) return n;
		cout << errorMessage << endl;
	}
	
}

void read_config(string& fileNameData, int& n)
{
	ifstream f; //Поток для чтения.
	f.open("config.txt"); //Открываем файл config.txt в режиме чтения.
	if(f) //Если открытие файла config.txt прошло корректно, то
	{
		f >> fileNameData;
		f >> n;	
		
		f.close(); //Закрытие потока.		
	}
	else
    {
        cout << "File config.txt not found!" << endl; //Если открытие файла прошло некорректно, то
	                //вывод сообщения, об отсутствии такого файла
        // Запрашиваем у пользователя имя файла с данными        
        cout << "Input data file name: "; cin >> fileNameData;		
        // Вызов функции ввода целого положительного числа
		n = inputIntGt0("Enter n (n>0): ", "ERROR! n>0!");

		ofstream fout; //Описывает поток для записи данных в файл
		fout.open("config.txt"); //Открываем файл в режиме записи
		fout << fileNameData << " " << n;// Записываем в файл имя файла с данными и количество чисел
		f.close(); //Закрытие потока
    }
}

double* arrayCreate(int n)
{
	return new double[n];
}

void read_data(string fileNameData, double* arr, int n)
{
	ifstream f; //Поток для чтения.
	f.open(fileNameData); //Открываем файл fileNameData в режиме чтения.
	if(f) //Если открытие файла прошло корректно, то
	{
		for(int i = 0; i < n; i++)
		{
			f >> arr[i];
		}
		
		f.close(); //Закрытие потока.		
	}
	else
    {
        cout << "File " << fileNameData << " not found!" << endl; //Если открытие файла прошло некорректно, то
	                //вывод сообщения, об отсутствии такого файла
        
		// Запрашиваем у пользователя данные
		for(int i = 0; i < n; i++)
		{
			cout << "arr[" << i << "] = ";
			cin >> arr[i];
		}        
                
		ofstream fout; //Описывает поток для записи данных в файл
		fout.open(fileNameData); //Открываем файл в режиме записи
		for(int i = 0; i < n; i++)
		{
			fout << arr[i];// Записываем в файл i-й элемент массива arr
			if(i < n-1)
				fout << " ";
		}		
		f.close(); //Закрытие потока
    }
}

void arrayPrint(string message, double* arr, int n)
{
	cout << message;
	for(int i = 0; i < n; i++)
	{
		cout << arr[i];// Выводим в консоль i-й элемент массива arr
		if(i < n-1)
			cout << " ";
	}	
}

int main()
{
	float a;
	int n;
	string fileNameData;
	read_config(fileNameData, n);
	cout << "fileNameData = " << fileNameData << endl;
	cout << "n = " << n << endl;

	double* arr = arrayCreate(n);
	read_data(fileNameData, arr, n);
	arrayPrint("arr: ", arr, n);

	delete[] arr;
    return 0;
}