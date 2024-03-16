## Многомерные массивы

1. Создать статический двумерный массив размерами 3 строки и 5 столбцов.
   Инициализировать каждый элемент массива двузначным десятичным числом, при этом разряд десятков должен быть равен номеру строки массива (начиная с 1), а разряд единиц - номеру столбца.
   Например, элемент массива a[1][2] должен быть равен 23 (индекс строки 1 + 1 = 2;  индекс столбца 2 + 1 = 3).
   Вывести содержимое массива в консоль. Пример вывода:
```
  11  12  13  14  15
  21  22  23  24  25
  31  32  33  34  35
```
   
```c++
#include <iostream>
#include <iomanip>

using namespace std;

const unsigned int DIM1 = 3;
const unsigned int DIM2 = 5;

int arr2d[DIM1][DIM2];

int main()
{

    for (int i = 0; i < DIM1; i++)
    {
        for (int j = 0; j < DIM2; j++)
        {
            arr2d[i][j] = (i + 1) * 10 + (j + 1);
        }
    }

    for (int i = 0; i < DIM1; i++)
    {
        for (int j = 0; j < DIM2; j++)
        {
            cout << setw(4) << arr2d[i][j];
        }
        cout << endl;
    }

    return 0;
}
```


2. Создать динамический двумерный массив размерами 4 строки и 10 столбцов.
   Инициализировать элементы массива целыми числами от 0 до 39.

Пример вывода:
```
Step1: OK! 2d array created!

Step2: OK! 2d array initialized!

0 1 2 3 4 5 6 7 8 9 
10 11 12 13 14 15 16 17 18 19 
20 21 22 23 24 25 26 27 28 29 
30 31 32 33 34 35 36 37 38 39 
Step3: OK! 2d array printed!

0: 0x562c50448ee0 -(delete[] p_row)-> 0x562c50448ee0 -(p_row = nullptr)-> 0
1: 0x562c50448f40 -(delete[] p_row)-> 0x562c50448f40 -(p_row = nullptr)-> 0
2: 0x562c50448fa0 -(delete[] p_row)-> 0x562c50448fa0 -(p_row = nullptr)-> 0
3: 0x562c50449000 -(delete[] p_row)-> 0x562c50449000 -(p_row = nullptr)-> 0
Step4: OK! 2d array released!
```

```c++
/******************************************************************************
Работа с двумерным динамическим массивом
*******************************************************************************/
#include <iostream>

int main()
{
    
    // 1. Создание двумерного массива
    uint numRows = 4;
    uint numCols = 10;
    
    double** array2d = new double*[numRows];
    for(uint i = 0; i < numRows; i++)
    {
        array2d[i] = new double[numCols];
    }
    std::cout << "Step1: OK! 2d array created!\n\n";
    
    // 2. Инициализация двумерного массива
    int data = 0;
    for(uint i = 0; i < numRows; i++)
    {
        for(uint j = 0; j < numCols; j++)
        {
            array2d[i][j] = data;
            data++;
        }
    }
    std::cout << "Step2: OK! 2d array initialized!\n\n";
    
    // 3. Выводим двумерный массив в консоль
    for(uint i = 0; i < numRows; i++)
    {
        for(uint j = 0; j < numCols; j++)
        {
            std::cout << array2d[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Step3: OK! 2d array printed!\n\n";
    
    // 4. Освобождаем память
    for(uint i = 0; i < numRows; i++)
    {
        double* p_row = array2d[i];
        std::cout << i << ": " << p_row;
        delete[] p_row;
        std::cout << " -(delete[] p_row)-> " << p_row;
        p_row = nullptr;
        std::cout << " -(p_row = nullptr)-> " << p_row << std::endl;
    }
    delete[] array2d;
    array2d = nullptr;
    std::cout << "Step4: OK! 2d array released!\n\n";
    
    return 0;
}
```