# Алгоритмизация и программирование

# Практические работы
1. Представление чисел в ЭВМ

   а) [Лабораторная работа №1. Позиционные и непозиционные системы счисления. Перевод чисел из одной системы счисления в другую. Стр. 7-19](https://xn--80aqa2d.xn--p1ai/files/e27dcce4-d929-464f-b8b8-2b4b59d36bfc.pdf)

   б) Вывод чисел в различных системах счисления в C++

```c++
#include <iostream>

using namespace std;

int main()
{
    // Десятичная система счисления
    int a_dec = 15;
    cout << "int a_dec = 15;"<<endl;
    cout << "decimal: a_dec = " << a_dec << endl;
    printf("hexadecimal: a_dec = %x \n", a_dec);
    printf("octal: a_dec = %o \n", a_dec);
    cout << endl;
    
    // Восьмеричная система счисления
    int b_oct = 015;
    cout << "int b_oct = 015;"<<endl;
    cout << "decimal: b_oct = " << b_oct << endl;
    printf("hexadecimal: b_oct = %x \n", b_oct);
    printf("octal: b_oct = %o \n", b_oct);
    cout << endl;
    
    // Шестнадцатеричная система счисления
    int c_hex = 0x15;
    cout << "int c_hex = 0x15;"<<endl;
    cout << "decimal: c_hex = " << c_hex << endl;
    printf("hexadecimal: c_hex = %x \n", c_hex);
    printf("octal: c_hex = %o \n", c_hex);
    cout << endl;
    
    // Двоичная система счисления
    int d_bin = 0b1110;
    cout << "int d_bin = 0b1110;"<<endl;
    cout << "decimal: d_bin = " << d_bin << endl;
    printf("hexadecimal: d_bin = %x \n", d_bin);
    printf("octal: d_bin = %o \n", d_bin);
    cout << endl;

    return 0;
}
```


2. Логические выражения, таблицы истинности и логические схемы

а) [Лабораторная работа №3. Логические основы работы компьютера. Логические функции. Таблицы истинности. Упрощение логических функций. Стр. 38-45](https://xn--80aqa2d.xn--p1ai/files/e27dcce4-d929-464f-b8b8-2b4b59d36bfc.pdf)

б) Вывод в консоль результатов вычисления логических выражений в C++

```c++
#include <iostream>

using namespace std;

int main()
{
    bool A = true;
    bool B = true;
    bool C = false;
    
    bool result1 = (A xor B) and not C;
    cout << result1 << endl;
    
    bool result2 = (A ^ B) && !C;
    cout << result2 << endl;

    return 0;
}
```

в) [Лабораторная работа №4. Логические основы работы компьютера. Логические функции. Основные логические элементы. Логические схемы. Стр. 46-57](https://xn--80aqa2d.xn--p1ai/files/e27dcce4-d929-464f-b8b8-2b4b59d36bfc.pdf)

3. Проектирование дискретной системы управления
4. Линейный вычислительный процесс
5. Условия
6. Циклы
7. Работа с массивами
8. -
9. -
10. -
11. -
12. -
13. -
14. -
15. -
16. -
17. -
18. -
19. -
20. -
21. -
22. -
23. -
24. -


# Лабораторные работы
1. Инструменты для разработки и документирования проектов на языке C++ (onlinegdb.com, git, github.com, markdown, msys2.org, gcc, g++, Visual Studio, Visual Studio Code, plantuml). Первая программа. Настройка параметров компиляции.  
2. Основы С++. Структура программы. Переменные. Типы данных. Константы. Ввод и вывод в консоль. Подключение пространств имен и определение псевдонимов.

Вычисление объёма прямоугольного параллелепипеда.
```c++
#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    
    cout << "Input a: ";
    cin >> a;
    
    cout << "Input b: ";
    cin >> b;
    
    cout << "Input c: ";
    cin >> c;

    double result = a * b * c;
    
    cout << "V = " << result;

    return 0;
}
```


```c++
#include <iostream>

using namespace std;

int main()
{
    int inp;
    
    cout << "Input seconds: ";
    cin >> inp;
    
    int days = inp / (3600 * 24);
    int hms = inp % (3600 * 24);
    
    int hours = hms / 3600;
    int ms = hms % 3600;
    
    int minutes = ms / 60;
    int seconds = ms % 60;
    
    cout << days << " days, " << hours << " h, " << minutes << " min, " << seconds << " sec." << endl;

    return 0;
}
```


3. Арифметические операции. Статическая типизация и преобразования типов.
4. Поразрядные операции. Операции присваивания. Условные выражения.
5. Конструкция if-else и тернарный оператор. Конструкция switch-case.
6. Циклы.
7. Ссылки.
8. Массивы.
9. Многомерные массивы.
10. Массивы символов
11. Строки. Тип std::string.
12. Указатели. Операции с указателями. Арифметика указателей.
13. Указатели и константы. Указатели и массивы.
14. Функции. Определение и объявление функций. Область видимости объектов. Параметры функции. Передача аргументов по значению и по ссылке.
15. Функции. Константные параметры. Оператор return и возвращение результата. Указатели в параметрах функции.
16.
