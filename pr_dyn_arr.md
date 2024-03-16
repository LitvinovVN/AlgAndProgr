# Динамические массивы

Написать программу, создающую динамический массив из 10 элементов. Инициализировать массив случайными числами в диапазоне от 1 до 10. Вывести содержимое массива в консоль с округлением до сотых.

```c++
#include <iostream>
// <ctime> содержит прототип функции time()
#include <ctime>
// <iomanip> содержит прототип функции setprecision()
#include <iomanip>

using namespace std;

int main()
{
    // 1. Переменная N содержит размер массива
    int N = 10;
    
    // 2 Инициализируем генератор случайных чисел
    srand(time(0));
    
    // 3. Создаём одномерный динамический массив из N элементов типа double
    //    и сохраняем указатель на него в переменной ptrArray типа double*
    double *ptrArray = new double[N];
    
    // 4. Заполняем массив случайными числами в диапазоне от 1 до 10
    for(int i = 0; i<N; i++)
    {
        ptrArray[i] = (rand() % 10 + 1) / float((rand() % 10 + 1));
    }
    
    // 5. Устанавливаем округление при выводе до двух цифр после запятой
    cout << setprecision(2);
    
    // 6. Выводим содержимое массива в консоль
    for(int i = 0; i<N; i++)
    {
        cout << "ptrArray[" << i << "] = " << ptrArray[i] << endl;
    }
    
    // 7. Удаляем динамический массив, на который указывает ptrArray
    delete[] ptrArray;
    return 0;
}
```

Пример вывода:
```
ptrArray[0] = 0.75
ptrArray[1] = 1
ptrArray[2] = 3.5
ptrArray[3] = 0.78
ptrArray[4] = 1.8
ptrArray[5] = 1
ptrArray[6] = 1.7
ptrArray[7] = 0.2
ptrArray[8] = 0.9
ptrArray[9] = 0.4
```


2. Написать программу, вычисляющую скалярное произведение двух векторов. Размерность векторов необходимо запросить у пользователя. Массивы заполнить случайными числами в диапазоне от -10 до 10. При выводе результат округлить до 3 цифр после запятой.




3. Создать динамический двумерный массив размерами 4 строки и 10 столбцов.
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