# Лабораторная работа № 1
## Установка и настройка программного инструментария

Цель работы: познакомиться с программным инструментарием, используемым при разработке кроссплатформенных приложений на языке C++

### Инструменты для разработки и документирования проектов на языке C++
- [Онлайн-компилятор onlinegdb.com](https://www.onlinegdb.com)
- [Система контроля версий git](https://git-scm.com)
- [Веб-сервис для хостинга ИТ-проектов github.com](https://github.com)
- [Язык разметки markdown](https://stifell.github.io/ru/post/markdown/)
- [msys2.org](https://www.msys2.org)
- [MinGW-w64 for Windows](https://winlibs.com)
- gcc
- g++
- [Visual Studio](https://visualstudio.microsoft.com/ru/free-developer-offers/)
- [Visual Studio Code](https://code.visualstudio.com)
- [plantuml](https://plantuml.com/ru/)

### Первая программа

#### Язык C. Файл main.c
```c
#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}
```

#### Язык C++. Файл main.cpp
```c++
#include <iostream>

int main()
{
    std::cout<<"Hello World";

    return 0;
}
```

### Настройка параметров компиляции.

#### Компиляция и запуск C-программы
```
gcc main.c -o app

./app
```

#### Компиляция и запуск C++-программы
```
g++ main.cpp -o app

./app
```