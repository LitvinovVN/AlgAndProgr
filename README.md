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

в) Построение таблицы истинности для функции xor ("исключающее ИЛИ")
```C++
/*
output:
A B res = A xor B
0 0 0
0 1 1
1 0 1
1 1 0
*/

#include <iostream>

using namespace std;

int main()
{
    bool A, B, res;
    
    cout << "A " << "B " << "res = A xor B" << endl;
    
    A = 0, B = 0;
    res = A xor B;
    cout << A << " " << B << " " << res << endl;
    
    A = 0, B = 1;
    res = A xor B;
    cout << A << " " << B << " " << res << endl;
    
    A = 1, B = 0;
    res = A xor B;
    cout << A << " " << B << " " << res << endl;
    
    A = 1, B = 1;
    res = A xor B;
    cout << A << " " << B << " " << res << endl;

    return 0;
}
```

г) Написать программу, меняющую значения двух целочисленных переменных без использования вспомогательной переменной
```c++
/*
a = 8     = 0b00001000
b = 16    = 0b00010000
a = a ^ b = 0b00011000
b = b ^ a = 0b00001000
a = a ^ b = 0b00010000

output:
a=8 b=16
a=16 b=8
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 8, b = 16;
    cout << "a=" << a << " b=" << b << endl;
    
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    
    cout << "a=" << a << " b=" << b << endl;

    return 0;
}
```

д) [Лабораторная работа №4. Логические основы работы компьютера. Логические функции. Основные логические элементы. Логические схемы. Стр. 46-57](https://xn--80aqa2d.xn--p1ai/files/e27dcce4-d929-464f-b8b8-2b4b59d36bfc.pdf)

3. Проектирование дискретной системы управления

```c++
/*
Разработка системы автоматизации проточного водонагревателя 

Входные сигналы:
bool Pusk = false;
bool Avariya = false;
float Temp = 95;

Технологический процесс запускается при Pusk = true.
Если технологический процесс запущен и работает в нормальном (неаварийном режиме), выход IsWork = true;
Если датчик температуры превышает 100 град. Цельсия, то Avariya = true 
Если датчик температуры в диапазоне от 0 до 80 град. Цельсия, то Nagrev = true.
Если датчик температуры в диапазоне от 81 до 100 град. Цельсия, то Nagrev = false.
Если датчик температуры меньше 0 град. Цельсия, то Error = true
Если Avariya = true, то технологический процесс должен быть остановлен.

Выходные данные:
IsWork - определяет, запущен ли технологический процесс
Nagrev - управление нагревателем
Error - сигнализация об ошибке
*/

#include <iostream>

using namespace std;

int main()
{
    bool Pusk = false;
    bool Avariya = false;
    float Temp = 145;
    
    bool IsWork;
    
    cout << "IsWork = " << IsWork << endl;

    return 0;
}
```



4. Линейный вычислительный процесс
5. Условия
6. Циклы
7. Работа с массивами
8. [Работа с массивами 2](pr_mas_02.md)
9. [Работа с многомерными массивами](pr_mas_03_multidim.md)
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

[Лабораторная работа № 1. Инструменты для разработки и документирования проектов на языке C++](lab01.md)

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

Пользователь вводит целое количество секунд.
Разложить это число на целое количество дней, часов, минут и секунд.
Например, 85 сек = 0 дней + 0 часов + 1 минута + 15 секунд.
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

Пользователь вводит предыдущие и текущие показания счетчика электроэнергии.
Рассчитать стоимость потребленной электроэнергии с учетом соц. нормы.
Соцнорма и тарифы задаются в коде.
В решении не использовать условные и циклические конструкции - линейный вычислительный процесс.
```c++
#include <iostream>

using namespace std;

int main()
{
    //cout << "prev, kWt*ch: ";
    int prev = 0;
    //cin >> prev;
    
    //cout << "curr, kWt*ch: ";
    int curr = 200;
    //cin >> curr;
    
    int rashod = curr - prev;
    int socnorma = 96;
    int insn = rashod / socnorma; // Кол-во соц. норм в расходе
    cout << insn << endl;
    int issocnorma = (insn>0);
    cout << issocnorma << endl;
    int oversocnorm = (rashod - socnorma) * issocnorma;// Кол-во сверх соц. нормы
    
    cout << oversocnorm << endl;

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
