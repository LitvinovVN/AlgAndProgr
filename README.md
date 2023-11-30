# Алгоритмизация и программирование

# Практические работы
1. [Представление чисел в ЭВМ](pr01.md)

2. [Логические выражения, таблицы истинности и логические схемы](pr02.md)

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
