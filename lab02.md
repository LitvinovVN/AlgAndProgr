# Лабораторная работа 2

## Основы С++. Структура программы. Переменные. Типы данных. Константы. Ввод и вывод в консоль. Подключение пространств имен и определение псевдонимов

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
