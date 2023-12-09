# Работа с функциями

1. Разработать алгоритм и написать программу, запрашивающую у пользователя два вещественных числа, вычисляющую и выводящую в консоль их среднее арифметическое. Ввод данных, вычисление и вывод реализовать в виде функций.

2. Разработать алгоритм и написать программу, запрашивающую у пользователя целое число N - размер динамического массива, создающую динамический массив вещественных чисел mas размером N и заполняющую массив mas индексами его элементов и выводящую его содержимое в консоль. Ввод данных, инициализацию массива и вывод данных реализовать в виде функций.

Пример вывода:
```
Input N: 10
0 1 2 3 4 5 6 7 8 9
```

Пример программной реализации:
```c++
#include <iostream>

using namespace std;

int inputGt0(string message, string errorMessage)
{
    while(1)
    {
        cout << message;
        int N;
        cin >> N;
        if(N>0) return N;
        cout << errorMessage << endl;
    }
}

double* createArray(int N)
{
    double* mas = new double[N];
    return mas;
}

void initArray(double* mas, int N)
{
    for(int i = 0; i < N; i++)
    {
        mas[i] = i;
    }
}

void printArray(double* arr, int N)
{
    for(int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N = inputGt0("Input N: ", "Error: N>0!");
    
    double* mas = createArray(N);
    initArray(mas, N);
    printArray(mas, N);

    return 0;
}
```

3. Разработать алгоритм и написать программу, запрашивающую у пользователя целое число N - размер динамического массива, создающую динамический массив вещественных чисел mas размером N и заполняющую массив mas случайными числами в диапазоне от -100 до 100 и выводящую его содержимое в консоль. Ввод данных, инициализацию массива и вывод данных реализовать в виде функций.

4. Разработать алгоритм и программу, реализующую следующую логику:
а) запрос исходых данных у пользователя: целое число N - размерность векторов, min - минимальное значение элементов вектора, max - максимальное значение элементов вектора
б) создание двух динамических массивов a и b размером N, содержащих вещественные значения
в) инициализация массивов случайными числами в диапазоне от min до max
г) вывод в консоль массивов a и b
д) циклический ввод режима работы: "exit" - завершение работы; "print a" - вывод в консоль содержимого массива a; "print b" - вывод в консоль содержимого массива b;  "max a" - вывод в консоль максимального значения массива a; "max b" - вывод в консоль максимального значения массива b; "min a" - вывод в консоль максимального значения массива a; "min b" - вывод в консоль максимального значения массива b.

Пример программной реализации:
```c++
#include <iostream>
#include <time.h>

using namespace std;

int inputIntGt0(string message, string errorMessage)
{
    int num;
    
    while(1)
    {
        cout << message;
        cin >> num;
        if (num > 0) break;
        cout << errorMessage;
    }
    
    return num;
}

double inputDouble(string message)
{
    double num;
    
    cout << message;
    cin >> num;
    
    return num;
}

double* createArray(int N)
{
    double* arr = new double[N];
    return arr;
}

void initArrayRnd(double* arr, int N, int min, int max)
{
    for(int i = 0; i < N; i++)
    {
        double rndNum = min + (max - min) * (random() % max) / max;
        arr[i] = rndNum;
    }
}

void printArray(double* arr, int N, string message)
{
    cout << message;
    for(int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double maxArray(double* arr, int N)
{
    double max = arr[0];
    for(int i = 1; i < N; i++)
    {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

double minArray(double* arr, int N)
{
    double min = arr[0];
    for(int i = 1; i < N; i++)
    {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

void userCommandProcessing(double* arr1, double* arr2, int N)
{
    string command;
    
    while(1)
    {
        cout << "Enter command: ";
        getline(cin, command);
        
        if(command == "exit") break;
        
        if(command == "print a")
        {
            printArray(arr1, N, "a = ");
            continue;
        }
        
        if(command == "print b")
        {
            printArray(arr2, N, "b = ");
            continue;
        }
        
        if(command == "max a")
        {
            double max = maxArray(arr1, N);
            cout << "max element of array a: " << max << endl;
            continue;
        }
        
        if(command == "max b")
        {
            double max = maxArray(arr2, N);
            cout << "max element of array b: " << max << endl;
            continue;
        }
        
        if(command == "min a")
        {
            double min = minArray(arr1, N);
            cout << "min element of array a: " << min << endl;
            continue;
        }
        
        if(command == "min b")
        {
            double min = minArray(arr2, N);
            cout << "min element of array b: " << min << endl;
            continue;
        }
        
        cout << "Command not recognized!" << endl;
    }
}

int main()
{
    srandom(time(NULL));
    int n = inputIntGt0("Input N>0: ", "Error! N > 0!\n");
    double min = inputDouble("Input min: ");
    double max = inputDouble("Input max: ");
    
    double* a = createArray(n);
    double* b = createArray(n);
    initArrayRnd(a, n, min, max);
    initArrayRnd(b, n, min, max);
    printArray(a, n, "a = ");
    printArray(b, n, "b = ");

    userCommandProcessing(a, b, n);

    cout << "Memory clearing..." << endl;
    delete[] a;
    delete[] b;
    cout << "Good Bye!" << endl;
    
    return 0;
}
```
